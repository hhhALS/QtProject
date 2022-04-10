#ifndef DATA_H
#define DATA_H
#include <QSize>
#include <QString>

const QSize maxMapSize(1600,900); //地圖寬、高的上限(<=)
const QSize minMapSize(600,480);  //地圖寬、高的下限(>=)

const int maxSnakeSize = 40; //蛇大小的上限
const int minSnakeSize = 5; //蛇大小的下限

const QString accountPath = "./data/user_account.json";     //儲存用戶帳號信息的檔案的[相對路徑]
const QString currentUserPath = "./data/current_user.json";  //儲存當前登錄用戶信息的檔案的[相對路徑]
const QString rankListPath = "./data/rank_list.json";  //儲存當前登錄用戶信息的檔案的[相對路徑]

/* 網路JSON相關的東西 */
const QString webJsonUrl_AC = "https://json.extendsclass.com/bin/288dbb48fe3a"; //網路JSON的請求Url【For帳號】
const QString webJsonUrl_RL = "https://json.extendsclass.com/bin/3df7aacd64c1"; //網路JSON的請求Url【For排行榜】
const QByteArray securityKey = "i_am_ngiokweng";  //網路JSON的請求密鑰


#endif // DATA_H
