#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // QPixmap pix(":/new/prefix1/image/onlineshoppingw1.webp");
    //ui->frontpage->setPixmap(pix);
    ui->stackedWidget->setCurrentIndex(0);


    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/Saikat Das/Documents/online_shopping/db/db.db");
    db.open();
    //QSqlQuery query;
    //qDebug() <<

}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
}


void MainWindow::on_signupbutton_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);
}


void MainWindow::on_loginbutton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
}


void MainWindow::on_loginokbutton_clicked()
{
    login_email=ui->login_email_input->text();
    login_password=ui->login_password_input->text();

    QSqlQuery query;
    query.exec("SELECT * FROM user WHERE email='"+login_email+"' AND password='"+login_password+"'");

    if(query.next())
    {
        ui->stackedWidget->setCurrentIndex(7);
    }
    else
    {
        QMessageBox::warning(this,"login","Wrong E-mail or password");
    }
    ui->login_email_input->clear();
     ui->login_password_input->clear();
}


void MainWindow::on_pushButton_clicked()
{
     this->close();
}


void MainWindow::on_signfromloginpage_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);
}


void MainWindow::on_signupokbutton_clicked()
{
    signup_name=ui->signup_name_input->text();
    signup_email=ui->signup_email_input->text();
    signup_password=ui->signup_password_input->text();
    signup_contact=ui->signup_contactno_input->text();

    QSqlQuery query;
    query.exec("INSERT INTO user(name,email,password,contact)VALUES('"+signup_name+"','"+signup_email+"','"+signup_password+"','"+signup_contact+"')");
    QMessageBox :: information(this,"signup","signup is successfull,please login");

    ui->signup_name_input->clear();
    ui->signup_email_input->clear();
    ui->signup_password_input->clear();
    ui->signup_contactno_input->clear();
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
}


void MainWindow::on_gotologinpage_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
}


void MainWindow::on_laptop_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}


void MainWindow::on_mobile_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}


void MainWindow::on_outfit_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}


void MainWindow::on_book_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}


void MainWindow::on_outfitback_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_laptopback_clicked()
{
   ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_booklistback_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_mobileback_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_backdetails_m_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}


void MainWindow::on_oneplus_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui-> detailslevelm->setText("Oneplus:\nColor:Black \n RAM:8GB,16GB\n ROM:128GB,256GB\nPrice:39,000");
    //ui->detailslevelm->clear();
}


void MainWindow::on_realme_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui-> detailslevelm->setText("‎Realme :‎Realme C55   \n Color:Black  \n Size: 6.7“  \n  RAM: 12GB   \n ROM: 128GB	\n Price:10,999 ");
}


void MainWindow::on_galaxymseris_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui-> detailslevelm->setText("Galaxy M series :Samsung Galaxy M51  \n Color:Gray \n Size: 6.8” \n RAM: 8GB  \n ROM:256 GB\n Price: 33,999");
}


void MainWindow::on_vivo_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui-> detailslevelm->setText("Vivo :vivo v27 5g vs vivo v27 pro 5g  \n Color: Blue    \n Size:  6.7“   \n   RAM:6 GB    \n    ROM: 64GB	\n Price:54,990");
}


void MainWindow::on_samsung_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui-> detailslevelm->setText("Samsung :  S2      \n  Color :Black 	\n  size : 6.7“  \n   RAM:12GB  \n      ROM : 256GB \n  Price:102,000  ");
}


void MainWindow::on_iqooneo7_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui-> detailslevelm->setText("IQOO :  vivo iQOO Neo6 \n Color:  Gray \n  Size: 6.8”    \n    RAM: 8GB    \n  ROM: 256GB	\n Price:40,000");
}


void MainWindow::on_xiaomi_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui-> detailslevelm->setText("Xiaomi:Xiaomi 13	\n   Color: Black	\n  Size:  6.7“  \n    RAM:4 GB    \n     ROM:64 GB  \n	 Price: 43,000");
}


void MainWindow::on_poco_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui-> detailslevelm->setText("POCO : Poco x3	\n   Color: Blue    \n	Size:6.8”     \n   RAM: 6GB      \n ROM: 128GB	\n Price:26,000");
}


void MainWindow::on_oppo_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui-> detailslevelm->setText("Oppo : Oppo f11 pro 5g  \n Color : Gray  \n  Size:6.8”  \n  RAM: 4GB  \n  ROM: 64GB\n Price: 25,000");
}


void MainWindow::on_tecno_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui-> detailslevelm->setText("Tecno :Tecno Spark 10C \n  Color: White \n Size:6.7” \n  RAM: 6GB  \n  ROM: 128GB\n Price: 12,000");
}


void MainWindow::on_thesunalsorise_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_thegoodsoldier_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_the_rainbow_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_as_i_lay_dying_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_on_the_road_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_scoop_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_the_age_of_innocence_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_underworld_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_lordofthefiles_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_dracula_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_backdetails_m_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}


void MainWindow::on_macbook_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->detailslevel_laptop_3->setText("MacBook :  MacBook Pro \n  size:13” \n  SSD : 128 GB \nPrice :160,000");
}


void MainWindow::on_apple_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->detailslevel_laptop_3->setText("Apple : MacBook Pro \n  size:14” \n  SSD : 256 GB \nPrice :123,000");
}


void MainWindow::on_hp_pavillion_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->detailslevel_laptop_3->setText("HP Pavilion: HP pavilion x360 \n size:15.6” \n  SSD : 256 GB \nPrice :95,000");
}


void MainWindow::on_macbook_pro_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->detailslevel_laptop_3->setText("MacBook Pro : MacBook Pro \n   size:16” \n SSD : 256 GB \n Price :235000 ");
}


void MainWindow::on_lenovo_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->detailslevel_laptop_3->setText("Lenovo : Lenovo V14\n  size:14” \n    SSD : 512 GB \nPrice 65,000");
}


void MainWindow::on_mackbook_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->detailslevel_laptop_3->setText("Mackbook: Asus VivoBook 15 E510MA  \n  size:15.6” \n    SSD : 512 GB \nPrice :47,000");
}


void MainWindow::on_acer_aspire_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->detailslevel_laptop_3->setText("Acer :Acer Swift SF314-43 \nsize:15.6” \nSSD : 512 GB\nPrice :77,000 ");
}


void MainWindow::on_idealpad_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->detailslevel_laptop_3->setText("IdealPad : IdeaPad 3 Chromebook (11)\n  size:14” \n    SSD : 128 GB \nPrice :66  ,000 ");
}


void MainWindow::on_elitebook_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->detailslevel_laptop_3->setText("EliteBook : HP EliteBook 840 G5\n  size:14” \n    SSD : 128GB \nPrice 35,000");
}


void MainWindow::on_pushButton_17_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_backdetails_laptop_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}


void MainWindow::on_dell_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->detailslevel_laptop_3->setText("Dell  : Dell Vostro 14 3400\nsize:14” \nSSD : 512 GB \nPrice :52,000");
}


void MainWindow::on_suit_clicked()
{
   ui->stackedWidget->setCurrentIndex(5);
   ui->detailslevel_outfit_4->setText("Suit : PREMIUM QUALITY CHECK BLAZER SUIT \nSize:XL/L/M\nColor- Light Grey\nPRICE: 7999  \n");

}


void MainWindow::on_jacket_clicked()
{
     ui->stackedWidget->setCurrentIndex(5);
   ui->detailslevel_outfit_4->setText("Jacket :Premium Winter Jacket\n Size:XL/L/M \nColor- Light Blue\n PRICE: 700  \n");
}


void MainWindow::on_sweater_clicked()
{
     ui->stackedWidget->setCurrentIndex(5);
   ui->detailslevel_outfit_4->setText("Sweater : Men Solid Color Sweater\n Size:XL/L/M \n Color-  Black \n price:999\n");
}


void MainWindow::on_jeans_clicked()
{
     ui->stackedWidget->setCurrentIndex(5);
   ui->detailslevel_outfit_4->setText("Jeans : Classic Fit Jeans Pant For Men \n Size:28/30/32\n Color- Blue \n PRICE: 700  \n");
}


void MainWindow::on_polo_shirt_clicked()
{
     ui->stackedWidget->setCurrentIndex(5);
   ui->detailslevel_outfit_4->setText("Polo Shirt : Olive Green Mixed Cotton Polo Shirt \n Size:XL/L/M \n Color- Yellow \n PRICE: 650  \n");
}


void MainWindow::on_coat_clicked()
{
     ui->stackedWidget->setCurrentIndex(5);
   ui->detailslevel_outfit_4->setText("Coat: Fashionable Black Suit For Men\n Size:XL/L/M\nColor- LBlack \n PRICE: 1699  \n");
}


void MainWindow::on_tshirt_clicked()
{
     ui->stackedWidget->setCurrentIndex(5);
     ui->detailslevel_outfit_4->setText("T shirts:Cotton short Sleeve t shirts for men\n Size:XL/L/M\nColor- Black \n PRICE: 500 \n");
}


void MainWindow::on_tracksuit_clicked()
{
     ui->stackedWidget->setCurrentIndex(5);
   ui->detailslevel_outfit_4->setText("Tracksuit:  Contrast Tracksuit With Triangle Design For Men\n Size:XL/L/M\n Color- white \n PRICE: 1399  ");
}


void MainWindow::on_shirt_clicked()
{
     ui->stackedWidget->setCurrentIndex(5);
   ui->detailslevel_outfit_4->setText("Shirt:Long Sleeve Casual Shirt \n Size:XL/L/M \n Color- Yellow \n PRICE: 2400  \n ");
}


void MainWindow::on_shoes_clicked()
{
     ui->stackedWidget->setCurrentIndex(5);
   ui->detailslevel_outfit_4->setText("Shoes:China Sneakers Shoes\n Size:39/41/42 \n Color- Yellow \n PRICE: 4000  \n ");
}


void MainWindow::on_backdetails_outfit_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void MainWindow::on_priceok_clicked()
{

}


void MainWindow::on_okaddtocard_clicked()
{
    if(ui->add_macbook->isChecked())
    {
//        QSqlQuery query;
//        query.prepare("SELECT product_price FROM 'main'.'productprice' WHERE product_type='MacBook'");
//        if(query.exec())
//        {
//            while(query.next())
//            {
//                qDebug()<<query.value("product_price");
//            }
//        }
        //QSqlQuery query;
        //dataprice=query.exec("SELECT product_price * FROM productprice WHERE product_name='MacBook' ");
//        ui->product_1->setText("MacBook");
//        ui->price_1->setText(query.value("product_price").toString());
//        total=total+query.value("product_price").toInt();
//        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
        ui->product_1->setText("Mackbook");
        ui->price_1->setText("235000");
        total=total+235000;
        total_text=QString::number(total);
    }
    if(ui->add_apple->isChecked())
    {
        ui->product_2->setText("Apple");
        ui->price_2->setText("123000");
        total=total+123000;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_hppavilion->isChecked())
    {
        ui->product_3->setText("HP Pavilion");
        ui->price_3->setText("95000");
        total=total+95000;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_macbookpro->isChecked())
    {
        ui->product_4->setText("MacBook Pro");
        ui->price_4->setText("160000");
        total=total+160000;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_lenovo->isChecked())
    {
        ui->product_5->setText("Lenovo");
        ui->price_5->setText("65000");
        total=total+65000;
        total_text=QString::number(total);
       // ui->total_price->setText(total_text);
    }
    if(ui->add_mackbook->isChecked())
    {
        ui->product_6->setText("MackBook");
        ui->price_6->setText("110000");
        total=total+110000;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_acer_aspire->isChecked())
    {
        ui->product_7->setText("Acer Aspire");
        ui->price_7->setText("77000");
        total=total+77000;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_idealpad->isChecked())
    {
        ui->product_8->setText("IdealPad");
        ui->price_8->setText("66000");
        total=total+66000;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_elitebook->isChecked())
    {
        ui->product_9->setText("Elitebook");
        ui->price_9->setText("35000");
        total=total+35000;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_dell->isChecked())
    {
        ui->product_10->setText("Dell");
        ui->price_10->setText("52000");
        total=total+52000;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    ui->total_price->setText(total_text);
    ui->stackedWidget->setCurrentIndex(6);

}


void MainWindow::on_okaddtocard_2_clicked()
{
    //ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_totalok_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_okaddcardmobile_clicked()
{
    if(ui->add_one_plus->isChecked())
    {
        //QSqlQuery query;
        //dataprice=query.exec("SELECT product_price * FROM productprice WHERE product_name='MacBook' ");
        ui->product_1->setText("One Plus");
        ui->price_1->setText("40000");
        total=total+40000;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_realme->isChecked())
    {
        ui->product_2->setText("Realme");
        ui->price_2->setText("10999");
        total=total+10999;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_galaxy->isChecked())
    {
        ui->product_3->setText("Galaxy M series");
        ui->price_3->setText("33999");
        total=total+33999;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_vivo->isChecked())
    {
        ui->product_4->setText("Vivo");
        ui->price_4->setText("54990");
        total=total+54990;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_samsung->isChecked())
    {
        ui->product_5->setText("Samsung");
        ui->price_5->setText("102000");
        total=total+102000;
        total_text=QString::number(total);
        // ui->total_price->setText(total_text);
    }
    if(ui->add_iqoo->isChecked())
    {
        ui->product_6->setText("iQOO Neo 7");
        ui->price_6->setText("40000");
        total=total+40000;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_xiaomi->isChecked())
    {
        ui->product_7->setText("Xiaomi");
        ui->price_7->setText("43000");
        total=total+43000;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_poco->isChecked())
    {
        ui->product_8->setText("Poco");
        ui->price_8->setText("26000");
        total=total+26000;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_oppo->isChecked())
    {
        ui->product_9->setText("Oppo");
        ui->price_9->setText("25000");
        total=total+25000;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_tecno->isChecked())
    {
        ui->product_10->setText("Tecno");
        ui->price_10->setText("12000");
        total=total+1200;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    ui->total_price->setText(total_text);
    ui->stackedWidget->setCurrentIndex(6);

}


void MainWindow::on_addtototaloutfit_clicked()
{
    if(ui->add_suit->isChecked())
    {
        //QSqlQuery query;
        //dataprice=query.exec("SELECT product_price * FROM productprice WHERE product_name='MacBook' ");
        ui->product_1->setText("Suit");
        ui->price_1->setText("7999");
        total=total+7999;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_jacket->isChecked())
    {
        ui->product_2->setText("Jacket");
        ui->price_2->setText("700");
        total=total+700;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_sweater->isChecked())
    {
        ui->product_3->setText("Sweater");
        ui->price_3->setText("999");
        total=total+999;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_jeans->isChecked())
    {
        ui->product_4->setText("Jeans");
        ui->price_4->setText("700");
        total=total+700;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_polo_shirt->isChecked())
    {
        ui->product_5->setText("Polo shirt");
        ui->price_5->setText("650");
        total=total+650;
        total_text=QString::number(total);
        // ui->total_price->setText(total_text);
    }
    if(ui->add_coat->isChecked())
    {
        ui->product_6->setText("Coat");
        ui->price_6->setText("1699");
        total=total+1699;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_tshirt->isChecked())
    {
        ui->product_7->setText("T-shirt");
        ui->price_7->setText("500");
        total=total+500;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_tracksuit->isChecked())
    {
        ui->product_8->setText("tracksuit");
        ui->price_8->setText("1399");
        total=total+1399;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_shoes->isChecked())
    {
        ui->product_9->setText("shirt");
        ui->price_9->setText("2400");
        total=total+2400;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_shoes->isChecked())
    {
        ui->product_10->setText("Shoes");
        ui->price_10->setText("4000");
        total=total+4000;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }

    ui->total_price->setText(total_text);
    ui->stackedWidget->setCurrentIndex(6);

}


void MainWindow::on_addtocardbookprice_clicked()
{
    if(ui->add_sun_also_riser->isChecked())
    {
        //QSqlQuery query;
        //dataprice=query.exec("SELECT product_price * FROM productprice WHERE product_name='MacBook' ");
        ui->product_1->setText("Sun also riser");
        ui->price_1->setText("350");
        total=total+350;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_the_good_soldier->isChecked())
    {
        ui->product_2->setText("The good soldier");
        ui->price_2->setText("400");
        total=total+400;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_the_rainbow->isChecked())
    {
        ui->product_3->setText("The rainbow");
        ui->price_3->setText("200");
        total=total+200;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_as_i_lay_dying->isChecked())
    {
        ui->product_4->setText("As I lay Dying");
        ui->price_4->setText("350");
        total=total+350;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_on_the_road->isChecked())
    {
        ui->product_5->setText("On The Road");
        ui->price_5->setText("270");
        total=total+270;
        total_text=QString::number(total);
        // ui->total_price->setText(total_text);
    }
    if(ui->add_scoop->isChecked())
    {
        ui->product_6->setText("Scoop");
        ui->price_6->setText("500");
        total=total+500;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_the_age_of_innocenc->isChecked())
    {
        ui->product_7->setText("The Age Of Innocence");
        ui->price_7->setText("459");
        total=total+459;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_underworld->isChecked())
    {
        ui->product_8->setText("Underworld");
        ui->price_8->setText("450");
        total=total+450;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_lord_of_the_files->isChecked())
    {
        ui->product_9->setText("Lord Of The Files");
        ui->price_9->setText("550");
        total=total+550;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }
    if(ui->add_dracula->isChecked())
    {
        ui->product_9->setText("Dracula");
        ui->price_9->setText("600");
        total=total+600;
        total_text=QString::number(total);
        //ui->total_price->setText(total_text);
    }

    ui->total_price->setText(total_text);
    ui->stackedWidget->setCurrentIndex(6);

}


void MainWindow::on_bankingok_clicked()
{
    mobilebanking_name=ui->name_mobilebanking->text();
    mobilebanking_contact=ui->contract_mobilebanking->text();
    mobilebanking_email=ui->email_mobilebanking->text();
    mobilebanking_system=ui->systemname_mobilebanking->text();

    QSqlQuery query;
    query.exec("INSERT INTO mobilebanking(name,contact,email,mobile_banking)VALUES('"+mobilebanking_name+"','"+mobilebanking_contact+"','"+mobilebanking_email+"','"+mobilebanking_system+"')");

      //QMessageBox :: information(this,"ok","Your payment is succesfull");
    ui->name_mobilebanking->clear();
    ui->contract_mobilebanking->clear();
    ui->email_mobilebanking->clear();
    ui->systemname_mobilebanking->clear();

    ui->stackedWidget->setCurrentIndex(14);
    QMessageBox :: information(this,"ok","Your payment is succesfull");
}


void MainWindow::on_lasttolist_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_backtolast_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_backtobanking_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}


void MainWindow::on_book_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_lastlogout_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_congratulation_clicked()
{
     //ui->stackedWidget->setCurrentIndex(14);
}

