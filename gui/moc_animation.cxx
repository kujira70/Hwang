/****************************************************************************
** Meta object code from reading C++ file 'animation.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../2012/Code/gui/animation.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Animation[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   11,   10,   10, 0x05,
      42,   37,   10,   10, 0x05,
      68,   61,   10,   10, 0x05,
     101,   89,   10,   10, 0x05,
     146,  135,   10,   10, 0x05,
     174,  167,   10,   10, 0x05,
     197,  167,   10,   10, 0x05,
     230,  223,   10,   10, 0x05,
     267,  254,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     291,   10,   10,   10, 0x0a,
     298,   10,   10,   10, 0x0a,
     306,   10,   10,   10, 0x0a,
     320,  313,   10,   10, 0x0a,
     345,  167,   10,   10, 0x0a,
     374,  365,   10,   10, 0x0a,
     402,   10,   10,   10, 0x0a,
     422,   10,   10,   10, 0x0a,
     444,   10,   10,   10, 0x0a,
     463,   10,   10,   10, 0x0a,
     479,   10,   10,   10, 0x0a,
     493,   10,   10,   10, 0x0a,
     505,   10,   10,   10, 0x0a,
     517,   10,   10,   10, 0x0a,
     532,   10,   10,   10, 0x0a,
     545,   10,   10,   10, 0x0a,
     585,  558,   10,   10, 0x0a,
     623,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Animation[] = {
    "Animation\0\0reward\0emitReward(double)\0"
    "pose\0emitPose(MatrixXd)\0latent\0"
    "emitLatent(VectorXd)\0transitions\0"
    "emitTransitions(GPCMTransitions*)\0"
    "frame_rate\0emitFrameRate(float)\0target\0"
    "updateTarget(MatrixXd)\0updateTopTarget(MatrixXd)\0"
    "height\0emitTotalHeight(double)\0"
    "camera_state\0emitCamera(CameraState)\0"
    "tick()\0start()\0stop()\0newSet\0"
    "setActiveControlSet(int)\0setTarget(MatrixXd)\0"
    "location\0setTargetLocation(MatrixXd)\0"
    "activateSynthesis()\0activateConstraints()\0"
    "playTrainingData()\0useController()\0"
    "exportInput()\0loadInput()\0playInput()\0"
    "exportCamera()\0loadCamera()\0playCamera()\0"
    "zoom,rotation_x,rotation_y\0"
    "saveCameraState(double,double,double)\0"
    "pauseAnimation()\0"
};

void Animation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Animation *_t = static_cast<Animation *>(_o);
        switch (_id) {
        case 0: _t->emitReward((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->emitPose((*reinterpret_cast< const MatrixXd(*)>(_a[1]))); break;
        case 2: _t->emitLatent((*reinterpret_cast< const VectorXd(*)>(_a[1]))); break;
        case 3: _t->emitTransitions((*reinterpret_cast< GPCMTransitions*(*)>(_a[1]))); break;
        case 4: _t->emitFrameRate((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->updateTarget((*reinterpret_cast< const MatrixXd(*)>(_a[1]))); break;
        case 6: _t->updateTopTarget((*reinterpret_cast< const MatrixXd(*)>(_a[1]))); break;
        case 7: _t->emitTotalHeight((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->emitCamera((*reinterpret_cast< const CameraState(*)>(_a[1]))); break;
        case 9: _t->tick(); break;
        case 10: _t->start(); break;
        case 11: _t->stop(); break;
        case 12: _t->setActiveControlSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setTarget((*reinterpret_cast< const MatrixXd(*)>(_a[1]))); break;
        case 14: _t->setTargetLocation((*reinterpret_cast< const MatrixXd(*)>(_a[1]))); break;
        case 15: _t->activateSynthesis(); break;
        case 16: _t->activateConstraints(); break;
        case 17: _t->playTrainingData(); break;
        case 18: _t->useController(); break;
        case 19: _t->exportInput(); break;
        case 20: _t->loadInput(); break;
        case 21: _t->playInput(); break;
        case 22: _t->exportCamera(); break;
        case 23: _t->loadCamera(); break;
        case 24: _t->playCamera(); break;
        case 25: _t->saveCameraState((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 26: _t->pauseAnimation(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Animation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Animation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Animation,
      qt_meta_data_Animation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Animation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Animation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Animation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Animation))
        return static_cast<void*>(const_cast< Animation*>(this));
    return QObject::qt_metacast(_clname);
}

int Animation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void Animation::emitReward(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Animation::emitPose(const MatrixXd & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Animation::emitLatent(const VectorXd & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Animation::emitTransitions(GPCMTransitions * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Animation::emitFrameRate(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Animation::updateTarget(const MatrixXd & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Animation::updateTopTarget(const MatrixXd & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Animation::emitTotalHeight(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Animation::emitCamera(const CameraState & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
