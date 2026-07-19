/********************************************************************************
** Form generated from reading UI file 'open_manipulator_x_main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPEN_MANIPULATOR_X_MAIN_WINDOW_H
#define UI_OPEN_MANIPULATOR_X_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_24;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_18;
    QPlainTextEdit *plainTextEdit_log;
    QLabel *label_75;
    QVBoxLayout *verticalLayout_19;
    QVBoxLayout *verticalLayout_9;
    QPushButton *btn_timer_start;
    QHBoxLayout *horizontalLayout_22;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *label_38;
    QLineEdit *txt_j2;
    QLabel *label_12;
    QLabel *label_7;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *txt_j4;
    QLabel *label_39;
    QLabel *label_4;
    QLineEdit *txt_j1;
    QLineEdit *txt_j3;
    QLineEdit *txt_grip;
    QLabel *label_6;
    QLabel *label_11;
    QLabel *label_2;
    QGridLayout *gridLayout_4;
    QLineEdit *txt_y;
    QLineEdit *txt_q_x;
    QLabel *label_49;
    QLabel *label_10;
    QLabel *label_8;
    QLineEdit *txt_x;
    QLabel *label_16;
    QLabel *label_50;
    QLabel *label_9;
    QLineEdit *txt_q_z;
    QLabel *label_51;
    QLineEdit *txt_z;
    QLineEdit *txt_q_y;
    QLabel *label_52;
    QLineEdit *txt_q_w;
    QLabel *label_17;
    QLabel *label_15;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_init_pose;
    QPushButton *btn_home_pose;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_gripper_open;
    QPushButton *btn_gripper_close;
    QTabWidget *tabWidget;
    QWidget *tab_js;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *doubleSpinBox_j3;
    QLabel *label_23;
    QLabel *label_22;
    QDoubleSpinBox *doubleSpinBox_j1;
    QDoubleSpinBox *doubleSpinBox_j4;
    QLabel *label_19;
    QLabel *label_21;
    QLabel *label_61;
    QLabel *label_24;
    QDoubleSpinBox *doubleSpinBox_j2;
    QLabel *label_20;
    QLabel *label_26;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *btn_read_joint_angle;
    QPushButton *btn_send_joint_angle;
    QWidget *tab_cs;
    QWidget *horizontalLayoutWidget_30;
    QHBoxLayout *horizontalLayout_32;
    QGridLayout *gridLayout_5;
    QLabel *label_29;
    QLabel *label_32;
    QLabel *label_27;
    QLabel *label_31;
    QLabel *label_35;
    QDoubleSpinBox *doubleSpinBox_q_y;
    QDoubleSpinBox *doubleSpinBox_z;
    QDoubleSpinBox *doubleSpinBox_y;
    QLabel *label_30;
    QDoubleSpinBox *doubleSpinBox_x;
    QLabel *label_53;
    QDoubleSpinBox *doubleSpinBox_q_z;
    QDoubleSpinBox *doubleSpinBox_q_x;
    QLabel *label_54;
    QLabel *label_55;
    QDoubleSpinBox *doubleSpinBox_q_w;
    QLabel *label_28;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_17;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_57;
    QDoubleSpinBox *doubleSpinBox_position_tol;
    QLabel *label_56;
    QDoubleSpinBox *doubleSpinBox_orientation_tol;
    QCheckBox *checkBox;
    QVBoxLayout *verticalLayout_16;
    QPushButton *btn_read_kinematic_pose;
    QPushButton *btn_send_kinematic_pose;
    QWidget *Task_constructor;
    QWidget *verticalLayoutWidget_19;
    QVBoxLayout *verticalLayout_20;
    QPushButton *btn_save_pose;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_35;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label;
    QSpinBox *txt_rap;
    QPushButton *btn_play;
    QHBoxLayout *horizontalLayout_36;
    QPushButton *btn_read_task;
    QPushButton *btn_stop;
    QPushButton *btn_reset_task;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_37;
    QDoubleSpinBox *doubleSpinBox_gripper;
    QLabel *label_40;
    QPushButton *btn_set_gripper;
    QMenuBar *menubar;
    QMenu *menu_File;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QString::fromUtf8("MainWindowDesign"));
        MainWindowDesign->setEnabled(true);
        MainWindowDesign->resize(900, 759);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowDesign->sizePolicy().hasHeightForWidth());
        MainWindowDesign->setSizePolicy(sizePolicy);
        MainWindowDesign->setMinimumSize(QSize(793, 550));
        MainWindowDesign->setMaximumSize(QSize(900, 800));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QString::fromUtf8("action_Preferences"));
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindowDesign);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_11->addWidget(label_18);

        plainTextEdit_log = new QPlainTextEdit(centralwidget);
        plainTextEdit_log->setObjectName(QString::fromUtf8("plainTextEdit_log"));
        plainTextEdit_log->setReadOnly(true);

        verticalLayout_11->addWidget(plainTextEdit_log);

        label_75 = new QLabel(centralwidget);
        label_75->setObjectName(QString::fromUtf8("label_75"));

        verticalLayout_11->addWidget(label_75);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));

        verticalLayout_11->addLayout(verticalLayout_19);

        verticalLayout_11->setStretch(0, 1);
        verticalLayout_11->setStretch(1, 20);
        verticalLayout_11->setStretch(2, 1);
        verticalLayout_11->setStretch(3, 25);

        horizontalLayout_24->addLayout(verticalLayout_11);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        btn_timer_start = new QPushButton(centralwidget);
        btn_timer_start->setObjectName(QString::fromUtf8("btn_timer_start"));

        verticalLayout_9->addWidget(btn_timer_start);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));

        verticalLayout_9->addLayout(horizontalLayout_22);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        label_38 = new QLabel(centralwidget);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        gridLayout_3->addWidget(label_38, 4, 0, 1, 1);

        txt_j2 = new QLineEdit(centralwidget);
        txt_j2->setObjectName(QString::fromUtf8("txt_j2"));
        txt_j2->setEnabled(true);
        txt_j2->setLayoutDirection(Qt::LeftToRight);
        txt_j2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txt_j2->setReadOnly(true);

        gridLayout_3->addWidget(txt_j2, 1, 1, 1, 1);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 1, 2, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 3, 0, 1, 1);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 2, 2, 1, 1);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 3, 2, 1, 1);

        txt_j4 = new QLineEdit(centralwidget);
        txt_j4->setObjectName(QString::fromUtf8("txt_j4"));
        txt_j4->setEnabled(true);
        txt_j4->setLayoutDirection(Qt::LeftToRight);
        txt_j4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txt_j4->setReadOnly(true);

        gridLayout_3->addWidget(txt_j4, 3, 1, 1, 1);

        label_39 = new QLabel(centralwidget);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        gridLayout_3->addWidget(label_39, 4, 2, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        txt_j1 = new QLineEdit(centralwidget);
        txt_j1->setObjectName(QString::fromUtf8("txt_j1"));
        txt_j1->setEnabled(true);
        txt_j1->setLayoutDirection(Qt::LeftToRight);
        txt_j1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txt_j1->setReadOnly(true);

        gridLayout_3->addWidget(txt_j1, 0, 1, 1, 1);

        txt_j3 = new QLineEdit(centralwidget);
        txt_j3->setObjectName(QString::fromUtf8("txt_j3"));
        txt_j3->setEnabled(true);
        txt_j3->setLayoutDirection(Qt::LeftToRight);
        txt_j3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txt_j3->setReadOnly(true);

        gridLayout_3->addWidget(txt_j3, 2, 1, 1, 1);

        txt_grip = new QLineEdit(centralwidget);
        txt_grip->setObjectName(QString::fromUtf8("txt_grip"));
        txt_grip->setEnabled(true);
        txt_grip->setLayoutDirection(Qt::LeftToRight);
        txt_grip->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txt_grip->setReadOnly(true);

        gridLayout_3->addWidget(txt_grip, 4, 1, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 2, 0, 1, 1);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 0, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout_3);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        txt_y = new QLineEdit(centralwidget);
        txt_y->setObjectName(QString::fromUtf8("txt_y"));
        txt_y->setEnabled(true);
        txt_y->setLayoutDirection(Qt::LeftToRight);
        txt_y->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txt_y->setReadOnly(true);

        gridLayout_4->addWidget(txt_y, 1, 1, 1, 1);

        txt_q_x = new QLineEdit(centralwidget);
        txt_q_x->setObjectName(QString::fromUtf8("txt_q_x"));
        txt_q_x->setEnabled(true);
        txt_q_x->setLayoutDirection(Qt::LeftToRight);
        txt_q_x->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txt_q_x->setReadOnly(true);

        gridLayout_4->addWidget(txt_q_x, 3, 1, 1, 1);

        label_49 = new QLabel(centralwidget);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        gridLayout_4->addWidget(label_49, 3, 0, 1, 1);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 0, 0, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 2, 0, 1, 1);

        txt_x = new QLineEdit(centralwidget);
        txt_x->setObjectName(QString::fromUtf8("txt_x"));
        txt_x->setEnabled(true);
        txt_x->setLayoutDirection(Qt::LeftToRight);
        txt_x->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txt_x->setReadOnly(true);

        gridLayout_4->addWidget(txt_x, 0, 1, 1, 1);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_4->addWidget(label_16, 0, 2, 1, 1);

        label_50 = new QLabel(centralwidget);
        label_50->setObjectName(QString::fromUtf8("label_50"));

        gridLayout_4->addWidget(label_50, 4, 0, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_4->addWidget(label_9, 1, 0, 1, 1);

        txt_q_z = new QLineEdit(centralwidget);
        txt_q_z->setObjectName(QString::fromUtf8("txt_q_z"));
        txt_q_z->setEnabled(true);
        txt_q_z->setLayoutDirection(Qt::LeftToRight);
        txt_q_z->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txt_q_z->setReadOnly(true);

        gridLayout_4->addWidget(txt_q_z, 5, 1, 1, 1);

        label_51 = new QLabel(centralwidget);
        label_51->setObjectName(QString::fromUtf8("label_51"));

        gridLayout_4->addWidget(label_51, 5, 0, 1, 1);

        txt_z = new QLineEdit(centralwidget);
        txt_z->setObjectName(QString::fromUtf8("txt_z"));
        txt_z->setEnabled(true);
        txt_z->setLayoutDirection(Qt::LeftToRight);
        txt_z->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txt_z->setReadOnly(true);

        gridLayout_4->addWidget(txt_z, 2, 1, 1, 1);

        txt_q_y = new QLineEdit(centralwidget);
        txt_q_y->setObjectName(QString::fromUtf8("txt_q_y"));
        txt_q_y->setEnabled(true);
        txt_q_y->setLayoutDirection(Qt::LeftToRight);
        txt_q_y->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txt_q_y->setReadOnly(true);

        gridLayout_4->addWidget(txt_q_y, 4, 1, 1, 1);

        label_52 = new QLabel(centralwidget);
        label_52->setObjectName(QString::fromUtf8("label_52"));

        gridLayout_4->addWidget(label_52, 6, 0, 1, 1);

        txt_q_w = new QLineEdit(centralwidget);
        txt_q_w->setObjectName(QString::fromUtf8("txt_q_w"));
        txt_q_w->setEnabled(true);
        txt_q_w->setLayoutDirection(Qt::LeftToRight);
        txt_q_w->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        txt_q_w->setReadOnly(true);

        gridLayout_4->addWidget(txt_q_w, 6, 1, 1, 1);

        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_4->addWidget(label_17, 1, 2, 1, 1);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_4->addWidget(label_15, 2, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout_4);


        verticalLayout_9->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_init_pose = new QPushButton(centralwidget);
        btn_init_pose->setObjectName(QString::fromUtf8("btn_init_pose"));
        btn_init_pose->setEnabled(false);

        horizontalLayout_3->addWidget(btn_init_pose);

        btn_home_pose = new QPushButton(centralwidget);
        btn_home_pose->setObjectName(QString::fromUtf8("btn_home_pose"));
        btn_home_pose->setEnabled(false);

        horizontalLayout_3->addWidget(btn_home_pose);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btn_gripper_open = new QPushButton(centralwidget);
        btn_gripper_open->setObjectName(QString::fromUtf8("btn_gripper_open"));
        btn_gripper_open->setEnabled(false);

        horizontalLayout_4->addWidget(btn_gripper_open);

        btn_gripper_close = new QPushButton(centralwidget);
        btn_gripper_close->setObjectName(QString::fromUtf8("btn_gripper_close"));
        btn_gripper_close->setEnabled(false);

        horizontalLayout_4->addWidget(btn_gripper_close);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_9->addLayout(verticalLayout_3);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(348, 348));
        tab_js = new QWidget();
        tab_js->setObjectName(QString::fromUtf8("tab_js"));
        tab_js->setEnabled(true);
        tab_js->setTabletTracking(false);
        verticalLayoutWidget = new QWidget(tab_js);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 321, 162));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        doubleSpinBox_j3 = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox_j3->setObjectName(QString::fromUtf8("doubleSpinBox_j3"));
        doubleSpinBox_j3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_j3->setDecimals(3);
        doubleSpinBox_j3->setMinimum(-3.140000000000000);
        doubleSpinBox_j3->setMaximum(3.140000000000000);
        doubleSpinBox_j3->setSingleStep(0.050000000000000);

        gridLayout_2->addWidget(doubleSpinBox_j3, 2, 1, 1, 1);

        label_23 = new QLabel(verticalLayoutWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_2->addWidget(label_23, 1, 2, 1, 1);

        label_22 = new QLabel(verticalLayoutWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_2->addWidget(label_22, 3, 2, 1, 1);

        doubleSpinBox_j1 = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox_j1->setObjectName(QString::fromUtf8("doubleSpinBox_j1"));
        doubleSpinBox_j1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_j1->setDecimals(3);
        doubleSpinBox_j1->setMinimum(-3.140000000000000);
        doubleSpinBox_j1->setMaximum(3.140000000000000);
        doubleSpinBox_j1->setSingleStep(0.050000000000000);

        gridLayout_2->addWidget(doubleSpinBox_j1, 0, 1, 1, 1);

        doubleSpinBox_j4 = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox_j4->setObjectName(QString::fromUtf8("doubleSpinBox_j4"));
        doubleSpinBox_j4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_j4->setDecimals(3);
        doubleSpinBox_j4->setMinimum(-3.140000000000000);
        doubleSpinBox_j4->setMaximum(3.140000000000000);
        doubleSpinBox_j4->setSingleStep(0.050000000000000);

        gridLayout_2->addWidget(doubleSpinBox_j4, 3, 1, 1, 1);

        label_19 = new QLabel(verticalLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_2->addWidget(label_19, 2, 0, 1, 1);

        label_21 = new QLabel(verticalLayoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_2->addWidget(label_21, 2, 2, 1, 1);

        label_61 = new QLabel(verticalLayoutWidget);
        label_61->setObjectName(QString::fromUtf8("label_61"));

        gridLayout_2->addWidget(label_61, 0, 2, 1, 1);

        label_24 = new QLabel(verticalLayoutWidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_2->addWidget(label_24, 1, 0, 1, 1);

        doubleSpinBox_j2 = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox_j2->setObjectName(QString::fromUtf8("doubleSpinBox_j2"));
        doubleSpinBox_j2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_j2->setDecimals(3);
        doubleSpinBox_j2->setMinimum(-3.140000000000000);
        doubleSpinBox_j2->setMaximum(3.140000000000000);
        doubleSpinBox_j2->setSingleStep(0.050000000000000);

        gridLayout_2->addWidget(doubleSpinBox_j2, 1, 1, 1, 1);

        label_20 = new QLabel(verticalLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_2->addWidget(label_20, 3, 0, 1, 1);

        label_26 = new QLabel(verticalLayoutWidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_2->addWidget(label_26, 0, 0, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 3);
        gridLayout_2->setColumnStretch(2, 1);

        verticalLayout_4->addLayout(gridLayout_2);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        btn_read_joint_angle = new QPushButton(verticalLayoutWidget);
        btn_read_joint_angle->setObjectName(QString::fromUtf8("btn_read_joint_angle"));
        btn_read_joint_angle->setEnabled(false);

        horizontalLayout_13->addWidget(btn_read_joint_angle);

        btn_send_joint_angle = new QPushButton(verticalLayoutWidget);
        btn_send_joint_angle->setObjectName(QString::fromUtf8("btn_send_joint_angle"));
        btn_send_joint_angle->setEnabled(false);

        horizontalLayout_13->addWidget(btn_send_joint_angle);


        verticalLayout_4->addLayout(horizontalLayout_13);

        tabWidget->addTab(tab_js, QString());
        tab_cs = new QWidget();
        tab_cs->setObjectName(QString::fromUtf8("tab_cs"));
        horizontalLayoutWidget_30 = new QWidget(tab_cs);
        horizontalLayoutWidget_30->setObjectName(QString::fromUtf8("horizontalLayoutWidget_30"));
        horizontalLayoutWidget_30->setGeometry(QRect(10, 10, 321, 222));
        horizontalLayout_32 = new QHBoxLayout(horizontalLayoutWidget_30);
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        horizontalLayout_32->setContentsMargins(0, 0, 0, 0);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_29 = new QLabel(horizontalLayoutWidget_30);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_5->addWidget(label_29, 0, 0, 1, 1);

        label_32 = new QLabel(horizontalLayoutWidget_30);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_5->addWidget(label_32, 1, 0, 1, 1);

        label_27 = new QLabel(horizontalLayoutWidget_30);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_5->addWidget(label_27, 1, 2, 1, 1);

        label_31 = new QLabel(horizontalLayoutWidget_30);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_5->addWidget(label_31, 0, 2, 1, 1);

        label_35 = new QLabel(horizontalLayoutWidget_30);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout_5->addWidget(label_35, 3, 0, 1, 1);

        doubleSpinBox_q_y = new QDoubleSpinBox(horizontalLayoutWidget_30);
        doubleSpinBox_q_y->setObjectName(QString::fromUtf8("doubleSpinBox_q_y"));
        doubleSpinBox_q_y->setDecimals(3);
        doubleSpinBox_q_y->setMinimum(-1.000000000000000);
        doubleSpinBox_q_y->setMaximum(1.000000000000000);
        doubleSpinBox_q_y->setSingleStep(0.010000000000000);

        gridLayout_5->addWidget(doubleSpinBox_q_y, 4, 1, 1, 1);

        doubleSpinBox_z = new QDoubleSpinBox(horizontalLayoutWidget_30);
        doubleSpinBox_z->setObjectName(QString::fromUtf8("doubleSpinBox_z"));
        doubleSpinBox_z->setDecimals(3);
        doubleSpinBox_z->setMinimum(-1.000000000000000);
        doubleSpinBox_z->setMaximum(1.000000000000000);
        doubleSpinBox_z->setSingleStep(0.010000000000000);

        gridLayout_5->addWidget(doubleSpinBox_z, 2, 1, 1, 1);

        doubleSpinBox_y = new QDoubleSpinBox(horizontalLayoutWidget_30);
        doubleSpinBox_y->setObjectName(QString::fromUtf8("doubleSpinBox_y"));
        doubleSpinBox_y->setDecimals(3);
        doubleSpinBox_y->setMinimum(-1.000000000000000);
        doubleSpinBox_y->setMaximum(1.000000000000000);
        doubleSpinBox_y->setSingleStep(0.010000000000000);

        gridLayout_5->addWidget(doubleSpinBox_y, 1, 1, 1, 1);

        label_30 = new QLabel(horizontalLayoutWidget_30);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_5->addWidget(label_30, 2, 0, 1, 1);

        doubleSpinBox_x = new QDoubleSpinBox(horizontalLayoutWidget_30);
        doubleSpinBox_x->setObjectName(QString::fromUtf8("doubleSpinBox_x"));
        doubleSpinBox_x->setDecimals(3);
        doubleSpinBox_x->setMinimum(-1.000000000000000);
        doubleSpinBox_x->setMaximum(1.000000000000000);
        doubleSpinBox_x->setSingleStep(0.010000000000000);

        gridLayout_5->addWidget(doubleSpinBox_x, 0, 1, 1, 1);

        label_53 = new QLabel(horizontalLayoutWidget_30);
        label_53->setObjectName(QString::fromUtf8("label_53"));

        gridLayout_5->addWidget(label_53, 4, 0, 1, 1);

        doubleSpinBox_q_z = new QDoubleSpinBox(horizontalLayoutWidget_30);
        doubleSpinBox_q_z->setObjectName(QString::fromUtf8("doubleSpinBox_q_z"));
        doubleSpinBox_q_z->setDecimals(3);
        doubleSpinBox_q_z->setMinimum(-1.000000000000000);
        doubleSpinBox_q_z->setMaximum(1.000000000000000);
        doubleSpinBox_q_z->setSingleStep(0.010000000000000);

        gridLayout_5->addWidget(doubleSpinBox_q_z, 5, 1, 1, 1);

        doubleSpinBox_q_x = new QDoubleSpinBox(horizontalLayoutWidget_30);
        doubleSpinBox_q_x->setObjectName(QString::fromUtf8("doubleSpinBox_q_x"));
        doubleSpinBox_q_x->setDecimals(3);
        doubleSpinBox_q_x->setMinimum(-1.000000000000000);
        doubleSpinBox_q_x->setMaximum(1.000000000000000);
        doubleSpinBox_q_x->setSingleStep(0.010000000000000);

        gridLayout_5->addWidget(doubleSpinBox_q_x, 3, 1, 1, 1);

        label_54 = new QLabel(horizontalLayoutWidget_30);
        label_54->setObjectName(QString::fromUtf8("label_54"));

        gridLayout_5->addWidget(label_54, 5, 0, 1, 1);

        label_55 = new QLabel(horizontalLayoutWidget_30);
        label_55->setObjectName(QString::fromUtf8("label_55"));

        gridLayout_5->addWidget(label_55, 6, 0, 1, 1);

        doubleSpinBox_q_w = new QDoubleSpinBox(horizontalLayoutWidget_30);
        doubleSpinBox_q_w->setObjectName(QString::fromUtf8("doubleSpinBox_q_w"));
        doubleSpinBox_q_w->setDecimals(3);
        doubleSpinBox_q_w->setMinimum(-1.000000000000000);
        doubleSpinBox_q_w->setMaximum(1.000000000000000);
        doubleSpinBox_q_w->setSingleStep(0.010000000000000);

        gridLayout_5->addWidget(doubleSpinBox_q_w, 6, 1, 1, 1);

        label_28 = new QLabel(horizontalLayoutWidget_30);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_5->addWidget(label_28, 2, 2, 1, 1);


        horizontalLayout_32->addLayout(gridLayout_5);

        label_3 = new QLabel(horizontalLayoutWidget_30);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_32->addWidget(label_3);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        label_57 = new QLabel(horizontalLayoutWidget_30);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setAutoFillBackground(false);

        verticalLayout_14->addWidget(label_57);

        doubleSpinBox_position_tol = new QDoubleSpinBox(horizontalLayoutWidget_30);
        doubleSpinBox_position_tol->setObjectName(QString::fromUtf8("doubleSpinBox_position_tol"));
        doubleSpinBox_position_tol->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_position_tol->setDecimals(3);
        doubleSpinBox_position_tol->setMinimum(0.000000000000000);
        doubleSpinBox_position_tol->setMaximum(1.000000000000000);
        doubleSpinBox_position_tol->setSingleStep(0.010000000000000);
        doubleSpinBox_position_tol->setValue(0.050000000000000);

        verticalLayout_14->addWidget(doubleSpinBox_position_tol);

        label_56 = new QLabel(horizontalLayoutWidget_30);
        label_56->setObjectName(QString::fromUtf8("label_56"));

        verticalLayout_14->addWidget(label_56);

        doubleSpinBox_orientation_tol = new QDoubleSpinBox(horizontalLayoutWidget_30);
        doubleSpinBox_orientation_tol->setObjectName(QString::fromUtf8("doubleSpinBox_orientation_tol"));
        doubleSpinBox_orientation_tol->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_orientation_tol->setDecimals(3);
        doubleSpinBox_orientation_tol->setMinimum(0.000000000000000);
        doubleSpinBox_orientation_tol->setMaximum(1.000000000000000);
        doubleSpinBox_orientation_tol->setSingleStep(0.010000000000000);
        doubleSpinBox_orientation_tol->setValue(0.050000000000000);

        verticalLayout_14->addWidget(doubleSpinBox_orientation_tol);

        checkBox = new QCheckBox(horizontalLayoutWidget_30);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setChecked(true);

        verticalLayout_14->addWidget(checkBox);


        verticalLayout_17->addLayout(verticalLayout_14);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        btn_read_kinematic_pose = new QPushButton(horizontalLayoutWidget_30);
        btn_read_kinematic_pose->setObjectName(QString::fromUtf8("btn_read_kinematic_pose"));
        btn_read_kinematic_pose->setEnabled(false);

        verticalLayout_16->addWidget(btn_read_kinematic_pose);

        btn_send_kinematic_pose = new QPushButton(horizontalLayoutWidget_30);
        btn_send_kinematic_pose->setObjectName(QString::fromUtf8("btn_send_kinematic_pose"));
        btn_send_kinematic_pose->setEnabled(false);

        verticalLayout_16->addWidget(btn_send_kinematic_pose);

        verticalLayout_16->setStretch(0, 1);
        verticalLayout_16->setStretch(1, 1);

        verticalLayout_17->addLayout(verticalLayout_16);

        verticalLayout_17->setStretch(0, 1);
        verticalLayout_17->setStretch(1, 2);

        horizontalLayout_32->addLayout(verticalLayout_17);

        horizontalLayout_32->setStretch(2, 2);
        tabWidget->addTab(tab_cs, QString());
        Task_constructor = new QWidget();
        Task_constructor->setObjectName(QString::fromUtf8("Task_constructor"));
        verticalLayoutWidget_19 = new QWidget(Task_constructor);
        verticalLayoutWidget_19->setObjectName(QString::fromUtf8("verticalLayoutWidget_19"));
        verticalLayoutWidget_19->setGeometry(QRect(10, 10, 321, 231));
        verticalLayout_20 = new QVBoxLayout(verticalLayoutWidget_19);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        btn_save_pose = new QPushButton(verticalLayoutWidget_19);
        btn_save_pose->setObjectName(QString::fromUtf8("btn_save_pose"));

        verticalLayout_20->addWidget(btn_save_pose);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        label = new QLabel(verticalLayoutWidget_19);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_33->addWidget(label);

        txt_rap = new QSpinBox(verticalLayoutWidget_19);
        txt_rap->setObjectName(QString::fromUtf8("txt_rap"));
        txt_rap->setMaximum(999);
        txt_rap->setValue(1);

        horizontalLayout_33->addWidget(txt_rap);


        horizontalLayout_35->addLayout(horizontalLayout_33);

        btn_play = new QPushButton(verticalLayoutWidget_19);
        btn_play->setObjectName(QString::fromUtf8("btn_play"));

        horizontalLayout_35->addWidget(btn_play);


        verticalLayout_18->addLayout(horizontalLayout_35);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        btn_read_task = new QPushButton(verticalLayoutWidget_19);
        btn_read_task->setObjectName(QString::fromUtf8("btn_read_task"));
        btn_read_task->setEnabled(true);

        horizontalLayout_36->addWidget(btn_read_task);

        btn_stop = new QPushButton(verticalLayoutWidget_19);
        btn_stop->setObjectName(QString::fromUtf8("btn_stop"));

        horizontalLayout_36->addWidget(btn_stop);


        verticalLayout_18->addLayout(horizontalLayout_36);


        verticalLayout_20->addLayout(verticalLayout_18);

        btn_reset_task = new QPushButton(verticalLayoutWidget_19);
        btn_reset_task->setObjectName(QString::fromUtf8("btn_reset_task"));

        verticalLayout_20->addWidget(btn_reset_task);

        verticalLayout_20->setStretch(0, 3);
        verticalLayout_20->setStretch(1, 1);
        verticalLayout_20->setStretch(2, 3);
        tabWidget->addTab(Task_constructor, QString());

        verticalLayout_9->addWidget(tabWidget);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_37 = new QLabel(centralwidget);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        horizontalLayout_23->addWidget(label_37);

        doubleSpinBox_gripper = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_gripper->setObjectName(QString::fromUtf8("doubleSpinBox_gripper"));
        doubleSpinBox_gripper->setMinimumSize(QSize(0, 4));
        doubleSpinBox_gripper->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_gripper->setDecimals(3);
        doubleSpinBox_gripper->setMinimum(-1.135000000000000);
        doubleSpinBox_gripper->setMaximum(1.135000000000000);
        doubleSpinBox_gripper->setSingleStep(0.002000000000000);
        doubleSpinBox_gripper->setValue(0.000000000000000);

        horizontalLayout_23->addWidget(doubleSpinBox_gripper);

        label_40 = new QLabel(centralwidget);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        horizontalLayout_23->addWidget(label_40);

        btn_set_gripper = new QPushButton(centralwidget);
        btn_set_gripper->setObjectName(QString::fromUtf8("btn_set_gripper"));
        btn_set_gripper->setEnabled(false);

        horizontalLayout_23->addWidget(btn_set_gripper);

        horizontalLayout_23->setStretch(0, 1);
        horizontalLayout_23->setStretch(1, 2);
        horizontalLayout_23->setStretch(2, 1);

        verticalLayout_9->addLayout(horizontalLayout_23);


        horizontalLayout_24->addLayout(verticalLayout_9);

        horizontalLayout_24->setStretch(0, 3);
        horizontalLayout_24->setStretch(1, 2);

        gridLayout->addLayout(horizontalLayout_24, 0, 0, 1, 1);

        MainWindowDesign->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowDesign);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 22));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        MainWindowDesign->setMenuBar(menubar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Preferences);
        menu_File->addSeparator();
        menu_File->addAction(actionAbout);
        menu_File->addAction(actionAbout_Qt);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);

        retranslateUi(MainWindowDesign);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindowDesign, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QCoreApplication::translate("MainWindowDesign", "OpenManipulator control GUI", nullptr));
        action_Quit->setText(QCoreApplication::translate("MainWindowDesign", "&Quit", nullptr));
#if QT_CONFIG(shortcut)
        action_Quit->setShortcut(QCoreApplication::translate("MainWindowDesign", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Preferences->setText(QCoreApplication::translate("MainWindowDesign", "&Preferences", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindowDesign", "&About", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindowDesign", "About &Qt", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindowDesign", "Logging", nullptr));
        label_75->setText(QCoreApplication::translate("MainWindowDesign", "Task", nullptr));
        btn_timer_start->setText(QCoreApplication::translate("MainWindowDesign", "Timer Start", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindowDesign", "Joint 2", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindowDesign", "Gripper", nullptr));
        txt_j2->setText(QCoreApplication::translate("MainWindowDesign", "0.0", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindowDesign", "rad", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindowDesign", "Joint 4", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindowDesign", "rad", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindowDesign", "rad", nullptr));
        txt_j4->setText(QCoreApplication::translate("MainWindowDesign", "0.0", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindowDesign", "m", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindowDesign", "Joint 1", nullptr));
        txt_j1->setText(QCoreApplication::translate("MainWindowDesign", "0.0", nullptr));
        txt_j3->setText(QCoreApplication::translate("MainWindowDesign", "0.0", nullptr));
        txt_grip->setText(QCoreApplication::translate("MainWindowDesign", "0.000", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindowDesign", "Joint 3", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindowDesign", "rad", nullptr));
        label_2->setText(QString());
        txt_y->setText(QCoreApplication::translate("MainWindowDesign", "0.0", nullptr));
        txt_q_x->setText(QCoreApplication::translate("MainWindowDesign", "0.0", nullptr));
        label_49->setText(QCoreApplication::translate("MainWindowDesign", "Q.x", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindowDesign", "X", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindowDesign", "Z", nullptr));
        txt_x->setText(QCoreApplication::translate("MainWindowDesign", "0.0", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindowDesign", "m", nullptr));
        label_50->setText(QCoreApplication::translate("MainWindowDesign", "Q.y", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindowDesign", "Y", nullptr));
        txt_q_z->setText(QCoreApplication::translate("MainWindowDesign", "0.0", nullptr));
        label_51->setText(QCoreApplication::translate("MainWindowDesign", "Q.z", nullptr));
        txt_z->setText(QCoreApplication::translate("MainWindowDesign", "0.0", nullptr));
        txt_q_y->setText(QCoreApplication::translate("MainWindowDesign", "0.0", nullptr));
        label_52->setText(QCoreApplication::translate("MainWindowDesign", "Q.w", nullptr));
        txt_q_w->setText(QCoreApplication::translate("MainWindowDesign", "0.0", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindowDesign", "m", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindowDesign", "m", nullptr));
        btn_init_pose->setText(QCoreApplication::translate("MainWindowDesign", "Init pose", nullptr));
        btn_home_pose->setText(QCoreApplication::translate("MainWindowDesign", "Home pose", nullptr));
        btn_gripper_open->setText(QCoreApplication::translate("MainWindowDesign", "Gripper open", nullptr));
        btn_gripper_close->setText(QCoreApplication::translate("MainWindowDesign", "Gripper close", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindowDesign", "rad", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindowDesign", "rad", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindowDesign", "Joint 3", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindowDesign", "rad", nullptr));
        label_61->setText(QCoreApplication::translate("MainWindowDesign", "rad", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindowDesign", "Joint 2", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindowDesign", "Joint 4", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindowDesign", "Joint 1", nullptr));
        btn_read_joint_angle->setText(QCoreApplication::translate("MainWindowDesign", "Read joint angle", nullptr));
        btn_send_joint_angle->setText(QCoreApplication::translate("MainWindowDesign", "Send", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_js), QCoreApplication::translate("MainWindowDesign", "Joint space", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindowDesign", "X ", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindowDesign", "Y", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindowDesign", "m", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindowDesign", "m", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindowDesign", "Q.x", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindowDesign", "Z", nullptr));
        label_53->setText(QCoreApplication::translate("MainWindowDesign", "Q.y", nullptr));
        label_54->setText(QCoreApplication::translate("MainWindowDesign", "Q.z", nullptr));
        label_55->setText(QCoreApplication::translate("MainWindowDesign", "Q.w", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindowDesign", "m", nullptr));
        label_3->setText(QString());
        label_57->setText(QCoreApplication::translate("MainWindowDesign", "position_tol", nullptr));
        label_56->setText(QCoreApplication::translate("MainWindowDesign", "orientation_tol", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindowDesign", "position only", nullptr));
        btn_read_kinematic_pose->setText(QCoreApplication::translate("MainWindowDesign", "Read kinematic pose", nullptr));
        btn_send_kinematic_pose->setText(QCoreApplication::translate("MainWindowDesign", "Send", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_cs), QCoreApplication::translate("MainWindowDesign", "Task space", nullptr));
        btn_save_pose->setText(QCoreApplication::translate("MainWindowDesign", "Save pose", nullptr));
        label->setText(QCoreApplication::translate("MainWindowDesign", "Iters", nullptr));
        btn_play->setText(QCoreApplication::translate("MainWindowDesign", "Play", nullptr));
        btn_read_task->setText(QCoreApplication::translate("MainWindowDesign", "Read task", nullptr));
        btn_stop->setText(QCoreApplication::translate("MainWindowDesign", "Stop", nullptr));
        btn_reset_task->setText(QCoreApplication::translate("MainWindowDesign", "Reset task", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Task_constructor), QCoreApplication::translate("MainWindowDesign", "Task constructor", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindowDesign", "Gripper", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindowDesign", "m", nullptr));
        btn_set_gripper->setText(QCoreApplication::translate("MainWindowDesign", "Set gripper", nullptr));
        menu_File->setTitle(QCoreApplication::translate("MainWindowDesign", "&App", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPEN_MANIPULATOR_X_MAIN_WINDOW_H
