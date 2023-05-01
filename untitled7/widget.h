#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSet>
#include<Qtnetwork>
#include "networkserver.h"
#include "networksocket.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
public:
    // 服务端
    NetworkServer* server;
    // 客户端
    //NetworkData data;
    NetworkSocket* socket1;
    NetworkSocket* socket;
    // 最后一个客户端
    QTcpSocket* lastOne;
    QString IP;
    int PORT;
    // 客户端池，NetworkServer 有一个 QList 的，但这里我想用 set，所以又弄了一个
    QSet<QTcpSocket*> clients;
    int flag_start;
    int flag_color;

private slots:
    void receieveData(QTcpSocket* client, NetworkData data);
    void receieveDataFromServer(NetworkData data);
    void onClientSendButtonClicked();
    void onServerSendButtonClicked();
    void reStart();
    void reConnect();
    void reSet();
    void on_CREADY_OP_clicked();
    void on_CREJECT_OP_clicked();
    void on_SREADY_OP_clicked();
    void on_SREJECT_OP_clicked();
    void on_CilentGiveup_clicked();
    void on_ServerGiveup_2_clicked();
    void on_CLEAVE_OP_clicked();
    void on_SLEAVE_OP_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H