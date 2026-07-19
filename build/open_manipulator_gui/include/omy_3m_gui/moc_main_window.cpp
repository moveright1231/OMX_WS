/****************************************************************************
** Meta object code from reading C++ file 'main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/open_manipulator/open_manipulator_gui/include/omy_3m_gui/main_window.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omy_3m_gui__MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[377];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omy_3m_gui__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omy_3m_gui__MainWindow_t qt_meta_stringdata_omy_3m_gui__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 22), // "omy_3m_gui::MainWindow"
QT_MOC_LITERAL(1, 23, 13), // "timerCallback"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 26), // "on_btn_timer_start_clicked"
QT_MOC_LITERAL(4, 65, 24), // "on_btn_init_pose_clicked"
QT_MOC_LITERAL(5, 90, 24), // "on_btn_home_pose_clicked"
QT_MOC_LITERAL(6, 115, 31), // "on_btn_read_joint_angle_clicked"
QT_MOC_LITERAL(7, 147, 31), // "on_btn_send_joint_angle_clicked"
QT_MOC_LITERAL(8, 179, 34), // "on_btn_read_kinematic_pose_cl..."
QT_MOC_LITERAL(9, 214, 34), // "on_btn_send_kinematic_pose_cl..."
QT_MOC_LITERAL(10, 249, 24), // "on_btn_save_pose_clicked"
QT_MOC_LITERAL(11, 274, 19), // "on_btn_play_clicked"
QT_MOC_LITERAL(12, 294, 25), // "on_btn_reset_task_clicked"
QT_MOC_LITERAL(13, 320, 19), // "on_btn_stop_clicked"
QT_MOC_LITERAL(14, 340, 24), // "on_btn_read_task_clicked"
QT_MOC_LITERAL(15, 365, 11) // "tabSelected"

    },
    "omy_3m_gui::MainWindow\0timerCallback\0"
    "\0on_btn_timer_start_clicked\0"
    "on_btn_init_pose_clicked\0"
    "on_btn_home_pose_clicked\0"
    "on_btn_read_joint_angle_clicked\0"
    "on_btn_send_joint_angle_clicked\0"
    "on_btn_read_kinematic_pose_clicked\0"
    "on_btn_send_kinematic_pose_clicked\0"
    "on_btn_save_pose_clicked\0on_btn_play_clicked\0"
    "on_btn_reset_task_clicked\0on_btn_stop_clicked\0"
    "on_btn_read_task_clicked\0tabSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omy_3m_gui__MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    0,   85,    2, 0x0a /* Public */,
       4,    0,   86,    2, 0x0a /* Public */,
       5,    0,   87,    2, 0x0a /* Public */,
       6,    0,   88,    2, 0x0a /* Public */,
       7,    0,   89,    2, 0x0a /* Public */,
       8,    0,   90,    2, 0x0a /* Public */,
       9,    0,   91,    2, 0x0a /* Public */,
      10,    0,   92,    2, 0x0a /* Public */,
      11,    0,   93,    2, 0x0a /* Public */,
      12,    0,   94,    2, 0x0a /* Public */,
      13,    0,   95,    2, 0x0a /* Public */,
      14,    0,   96,    2, 0x0a /* Public */,
      15,    0,   97,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void omy_3m_gui::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->timerCallback(); break;
        case 1: _t->on_btn_timer_start_clicked(); break;
        case 2: _t->on_btn_init_pose_clicked(); break;
        case 3: _t->on_btn_home_pose_clicked(); break;
        case 4: _t->on_btn_read_joint_angle_clicked(); break;
        case 5: _t->on_btn_send_joint_angle_clicked(); break;
        case 6: _t->on_btn_read_kinematic_pose_clicked(); break;
        case 7: _t->on_btn_send_kinematic_pose_clicked(); break;
        case 8: _t->on_btn_save_pose_clicked(); break;
        case 9: _t->on_btn_play_clicked(); break;
        case 10: _t->on_btn_reset_task_clicked(); break;
        case 11: _t->on_btn_stop_clicked(); break;
        case 12: _t->on_btn_read_task_clicked(); break;
        case 13: _t->tabSelected(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject omy_3m_gui::MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_omy_3m_gui__MainWindow.data,
    qt_meta_data_omy_3m_gui__MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *omy_3m_gui::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omy_3m_gui::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omy_3m_gui__MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int omy_3m_gui::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
