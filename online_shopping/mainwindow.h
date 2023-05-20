#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include<QDebug>
#include <QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:



    void on_signupbutton_clicked();

    void on_loginbutton_2_clicked();

    void on_loginokbutton_clicked();

    void on_pushButton_clicked();

    void on_signfromloginpage_clicked();

    void on_signupokbutton_clicked();

    void on_pushButton_2_clicked();

    void on_gotologinpage_clicked();

    void on_laptop_clicked();

    void on_mobile_clicked();

    void on_outfit_clicked();

    void on_book_clicked();

    void on_outfitback_clicked();

    void on_laptopback_clicked();

    void on_booklistback_clicked();

    void on_mobileback_clicked();

    void on_backdetails_m_clicked();

    void on_oneplus_clicked();

    void on_realme_clicked();

    void on_galaxymseris_clicked();

    void on_vivo_clicked();

    void on_samsung_clicked();

    void on_iqooneo7_clicked();

    void on_xiaomi_clicked();

    void on_poco_clicked();

    void on_oppo_clicked();

    void on_tecno_clicked();

    void on_thesunalsorise_clicked();

    void on_thegoodsoldier_clicked();

    void on_the_rainbow_clicked();

    void on_as_i_lay_dying_clicked();

    void on_on_the_road_clicked();

    void on_scoop_clicked();

    void on_the_age_of_innocence_clicked();

    void on_underworld_clicked();

    void on_lordofthefiles_clicked();

    void on_dracula_clicked();

    void on_backdetails_m_2_clicked();

    void on_macbook_clicked();

    void on_apple_clicked();

    void on_hp_pavillion_clicked();

    void on_macbook_pro_clicked();

    void on_lenovo_clicked();

    void on_mackbook_clicked();

    void on_acer_aspire_clicked();

    void on_idealpad_clicked();

    void on_elitebook_clicked();

    void on_pushButton_17_clicked();

    void on_backdetails_laptop_3_clicked();

    void on_dell_clicked();

    void on_suit_clicked();

    void on_jacket_clicked();

    void on_sweater_clicked();

    void on_jeans_clicked();

    void on_polo_shirt_clicked();

    void on_coat_clicked();

    void on_tshirt_clicked();

    void on_tracksuit_clicked();

    void on_shirt_clicked();

    void on_shoes_clicked();

    void on_backdetails_outfit_4_clicked();

    void on_priceok_clicked();

    void on_okaddtocard_clicked();

    void on_okaddtocard_2_clicked();

    void on_totalok_clicked();

    void on_okaddcardmobile_clicked();

    void on_addtototaloutfit_clicked();

    void on_addtocardbookprice_clicked();

    void on_bankingok_clicked();

    void on_lasttolist_clicked();

    void on_backtolast_clicked();

    void on_backtobanking_clicked();

    void on_book_2_clicked();

    void on_lastlogout_clicked();

    void on_congratulation_clicked();

private:
    Ui::MainWindow *ui;

    QString login_email,login_password,signup_name,signup_email,signup_password,signup_contact,total_text,mobilebanking_name,mobilebanking_contact,mobilebanking_email,mobilebanking_system;
    qint32 total=0,dataprice;

    QSqlDatabase db;
};
#endif // MAINWINDOW_H
