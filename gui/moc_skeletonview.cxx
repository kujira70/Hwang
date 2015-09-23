/****************************************************************************
** Meta object code from reading C++ file 'skeletonview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../2012/Code/gui/skeletonview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'skeletonview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SkeletonView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   14,   13,   13, 0x05,
      54,   45,   13,   13, 0x05,
      80,   13,   13,   13, 0x05,
      95,   13,   13,   13, 0x05,
     139,  112,   13,   13, 0x05,
     172,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     191,  189,   13,   13, 0x0a,
     211,  209,   13,   13, 0x0a,
     229,   14,   13,   13, 0x0a,
     258,  249,   13,   13, 0x0a,
     283,  277,   13,   13, 0x0a,
     297,  277,   13,   13, 0x0a,
     315,   13,   13,   13, 0x0a,
     330,   13,   13,   13, 0x0a,
     353,  346,   13,   13, 0x0a,
     377,  371,   13,   13, 0x0a,
     408,  395,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SkeletonView[] = {
    "SkeletonView\0\0target\0targetChanged(MatrixXd)\0"
    "location\0locationChanged(MatrixXd)\0"
    "setSynthesis()\0setConstraints()\0"
    "zoom,rotation_x,rotation_y\0"
    "emitCamera(double,double,double)\0"
    "pauseAnimation()\0r\0setReward(double)\0"
    "Y\0setPose(MatrixXd)\0setTarget(MatrixXd)\0"
    "joint_id\0setFocusJoint(int)\0state\0"
    "setFocus(int)\0setHighlight(int)\0"
    "playTraining()\0useController()\0height\0"
    "setHeight(double)\0style\0setPoleStyle(int)\0"
    "camera_state\0setCamera(CameraState)\0"
};

void SkeletonView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SkeletonView *_t = static_cast<SkeletonView *>(_o);
        switch (_id) {
        case 0: _t->targetChanged((*reinterpret_cast< const MatrixXd(*)>(_a[1]))); break;
        case 1: _t->locationChanged((*reinterpret_cast< const MatrixXd(*)>(_a[1]))); break;
        case 2: _t->setSynthesis(); break;
        case 3: _t->setConstraints(); break;
        case 4: _t->emitCamera((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 5: _t->pauseAnimation(); break;
        case 6: _t->setReward((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setPose((*reinterpret_cast< const MatrixXd(*)>(_a[1]))); break;
        case 8: _t->setTarget((*reinterpret_cast< const MatrixXd(*)>(_a[1]))); break;
        case 9: _t->setFocusJoint((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 10: _t->setFocus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setHighlight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->playTraining(); break;
        case 13: _t->useController(); break;
        case 14: _t->setHeight((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->setPoleStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->setCamera((*reinterpret_cast< const CameraState(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SkeletonView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SkeletonView::staticMetaObject = {
    { &View3D::staticMetaObject, qt_meta_stringdata_SkeletonView,
      qt_meta_data_SkeletonView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SkeletonView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SkeletonView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SkeletonView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SkeletonView))
        return static_cast<void*>(const_cast< SkeletonView*>(this));
    return View3D::qt_metacast(_clname);
}

int SkeletonView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View3D::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void SkeletonView::targetChanged(const MatrixXd & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SkeletonView::locationChanged(const MatrixXd & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SkeletonView::setSynthesis()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void SkeletonView::setConstraints()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void SkeletonView::emitCamera(double _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SkeletonView::pauseAnimation()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
