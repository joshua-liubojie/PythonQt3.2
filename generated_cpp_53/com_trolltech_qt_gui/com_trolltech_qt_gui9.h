#include <PythonQt.h>
#include <QIcon>
#include <QObject>
#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgesture.h>
#include <qglyphrun.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qheaderview.h>
#include <qicon.h>
#include <qimage.h>
#include <qitemeditorfactory.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qline.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmatrix.h>
#include <qmenu.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpicture.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstatictext.h>
#include <qstyle.h>
#include <qstyleditemdelegate.h>
#include <qstyleoption.h>
#include <qstylepainter.h>
#include <qstyleplugin.h>
#include <qsurface.h>
#include <qsurfaceformat.h>
#include <qsyntaxhighlighter.h>
#include <qsystemtrayicon.h>
#include <qtabbar.h>
#include <qtableview.h>
#include <qtabwidget.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qtextoption.h>
#include <qtransform.h>
#include <qvector.h>
#include <qwidget.h>
#include <qwindow.h>



class PythonQtShell_QStyleOptionSizeGrip : public QStyleOptionSizeGrip
{
public:
    PythonQtShell_QStyleOptionSizeGrip():QStyleOptionSizeGrip(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionSizeGrip(const QStyleOptionSizeGrip&  other):QStyleOptionSizeGrip(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionSizeGrip(int  version):QStyleOptionSizeGrip(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionSizeGrip();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionSizeGrip : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionSizeGrip::Type};
enum StyleOptionVersion{
  Version = QStyleOptionSizeGrip::Version};
public slots:
QStyleOptionSizeGrip* new_QStyleOptionSizeGrip();
QStyleOptionSizeGrip* new_QStyleOptionSizeGrip(const QStyleOptionSizeGrip&  other);
QStyleOptionSizeGrip* new_QStyleOptionSizeGrip(int  version);
void delete_QStyleOptionSizeGrip(QStyleOptionSizeGrip* obj) { delete obj; } 
void py_set_corner(QStyleOptionSizeGrip* theWrappedObject, Qt::Corner  corner){ theWrappedObject->corner = corner; }
Qt::Corner  py_get_corner(QStyleOptionSizeGrip* theWrappedObject){ return theWrappedObject->corner; }
};





class PythonQtShell_QStyleOptionSlider : public QStyleOptionSlider
{
public:
    PythonQtShell_QStyleOptionSlider():QStyleOptionSlider(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionSlider(const QStyleOptionSlider&  other):QStyleOptionSlider(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionSlider(int  version):QStyleOptionSlider(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionSlider();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionSlider : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionSlider::Type};
enum StyleOptionVersion{
  Version = QStyleOptionSlider::Version};
public slots:
QStyleOptionSlider* new_QStyleOptionSlider();
QStyleOptionSlider* new_QStyleOptionSlider(const QStyleOptionSlider&  other);
QStyleOptionSlider* new_QStyleOptionSlider(int  version);
void delete_QStyleOptionSlider(QStyleOptionSlider* obj) { delete obj; } 
void py_set_dialWrapping(QStyleOptionSlider* theWrappedObject, bool  dialWrapping){ theWrappedObject->dialWrapping = dialWrapping; }
bool  py_get_dialWrapping(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->dialWrapping; }
void py_set_maximum(QStyleOptionSlider* theWrappedObject, int  maximum){ theWrappedObject->maximum = maximum; }
int  py_get_maximum(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->maximum; }
void py_set_minimum(QStyleOptionSlider* theWrappedObject, int  minimum){ theWrappedObject->minimum = minimum; }
int  py_get_minimum(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->minimum; }
void py_set_notchTarget(QStyleOptionSlider* theWrappedObject, qreal  notchTarget){ theWrappedObject->notchTarget = notchTarget; }
qreal  py_get_notchTarget(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->notchTarget; }
void py_set_orientation(QStyleOptionSlider* theWrappedObject, Qt::Orientation  orientation){ theWrappedObject->orientation = orientation; }
Qt::Orientation  py_get_orientation(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->orientation; }
void py_set_pageStep(QStyleOptionSlider* theWrappedObject, int  pageStep){ theWrappedObject->pageStep = pageStep; }
int  py_get_pageStep(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->pageStep; }
void py_set_singleStep(QStyleOptionSlider* theWrappedObject, int  singleStep){ theWrappedObject->singleStep = singleStep; }
int  py_get_singleStep(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->singleStep; }
void py_set_sliderPosition(QStyleOptionSlider* theWrappedObject, int  sliderPosition){ theWrappedObject->sliderPosition = sliderPosition; }
int  py_get_sliderPosition(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->sliderPosition; }
void py_set_sliderValue(QStyleOptionSlider* theWrappedObject, int  sliderValue){ theWrappedObject->sliderValue = sliderValue; }
int  py_get_sliderValue(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->sliderValue; }
void py_set_tickInterval(QStyleOptionSlider* theWrappedObject, int  tickInterval){ theWrappedObject->tickInterval = tickInterval; }
int  py_get_tickInterval(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->tickInterval; }
void py_set_tickPosition(QStyleOptionSlider* theWrappedObject, QSlider::TickPosition  tickPosition){ theWrappedObject->tickPosition = tickPosition; }
QSlider::TickPosition  py_get_tickPosition(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->tickPosition; }
void py_set_upsideDown(QStyleOptionSlider* theWrappedObject, bool  upsideDown){ theWrappedObject->upsideDown = upsideDown; }
bool  py_get_upsideDown(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->upsideDown; }
};





class PythonQtShell_QStyleOptionSpinBox : public QStyleOptionSpinBox
{
public:
    PythonQtShell_QStyleOptionSpinBox():QStyleOptionSpinBox(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionSpinBox(const QStyleOptionSpinBox&  other):QStyleOptionSpinBox(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionSpinBox(int  version):QStyleOptionSpinBox(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionSpinBox();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionSpinBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionSpinBox::Type};
enum StyleOptionVersion{
  Version = QStyleOptionSpinBox::Version};
public slots:
QStyleOptionSpinBox* new_QStyleOptionSpinBox();
QStyleOptionSpinBox* new_QStyleOptionSpinBox(const QStyleOptionSpinBox&  other);
QStyleOptionSpinBox* new_QStyleOptionSpinBox(int  version);
void delete_QStyleOptionSpinBox(QStyleOptionSpinBox* obj) { delete obj; } 
void py_set_buttonSymbols(QStyleOptionSpinBox* theWrappedObject, QAbstractSpinBox::ButtonSymbols  buttonSymbols){ theWrappedObject->buttonSymbols = buttonSymbols; }
QAbstractSpinBox::ButtonSymbols  py_get_buttonSymbols(QStyleOptionSpinBox* theWrappedObject){ return theWrappedObject->buttonSymbols; }
void py_set_frame(QStyleOptionSpinBox* theWrappedObject, bool  frame){ theWrappedObject->frame = frame; }
bool  py_get_frame(QStyleOptionSpinBox* theWrappedObject){ return theWrappedObject->frame; }
void py_set_stepEnabled(QStyleOptionSpinBox* theWrappedObject, QAbstractSpinBox::StepEnabled  stepEnabled){ theWrappedObject->stepEnabled = stepEnabled; }
QAbstractSpinBox::StepEnabled  py_get_stepEnabled(QStyleOptionSpinBox* theWrappedObject){ return theWrappedObject->stepEnabled; }
};





class PythonQtShell_QStyleOptionTab : public QStyleOptionTab
{
public:
    PythonQtShell_QStyleOptionTab():QStyleOptionTab(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTab(const QStyleOptionTab&  other):QStyleOptionTab(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTab(int  version):QStyleOptionTab(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionTab();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionTab : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CornerWidget SelectedPosition StyleOptionType StyleOptionVersion TabFeature TabPosition )
Q_FLAGS(CornerWidgets TabFeatures )
enum CornerWidget{
  NoCornerWidgets = QStyleOptionTab::NoCornerWidgets,   LeftCornerWidget = QStyleOptionTab::LeftCornerWidget,   RightCornerWidget = QStyleOptionTab::RightCornerWidget};
enum SelectedPosition{
  NotAdjacent = QStyleOptionTab::NotAdjacent,   NextIsSelected = QStyleOptionTab::NextIsSelected,   PreviousIsSelected = QStyleOptionTab::PreviousIsSelected};
enum StyleOptionType{
  Type = QStyleOptionTab::Type};
enum StyleOptionVersion{
  Version = QStyleOptionTab::Version};
enum TabFeature{
  None = QStyleOptionTab::None,   HasFrame = QStyleOptionTab::HasFrame};
enum TabPosition{
  Beginning = QStyleOptionTab::Beginning,   Middle = QStyleOptionTab::Middle,   End = QStyleOptionTab::End,   OnlyOneTab = QStyleOptionTab::OnlyOneTab};
Q_DECLARE_FLAGS(CornerWidgets, CornerWidget)
Q_DECLARE_FLAGS(TabFeatures, TabFeature)
public slots:
QStyleOptionTab* new_QStyleOptionTab();
QStyleOptionTab* new_QStyleOptionTab(const QStyleOptionTab&  other);
QStyleOptionTab* new_QStyleOptionTab(int  version);
void delete_QStyleOptionTab(QStyleOptionTab* obj) { delete obj; } 
void py_set_cornerWidgets(QStyleOptionTab* theWrappedObject, QStyleOptionTab::CornerWidgets  cornerWidgets){ theWrappedObject->cornerWidgets = cornerWidgets; }
QStyleOptionTab::CornerWidgets  py_get_cornerWidgets(QStyleOptionTab* theWrappedObject){ return theWrappedObject->cornerWidgets; }
void py_set_documentMode(QStyleOptionTab* theWrappedObject, bool  documentMode){ theWrappedObject->documentMode = documentMode; }
bool  py_get_documentMode(QStyleOptionTab* theWrappedObject){ return theWrappedObject->documentMode; }
void py_set_features(QStyleOptionTab* theWrappedObject, QStyleOptionTab::TabFeatures  features){ theWrappedObject->features = features; }
QStyleOptionTab::TabFeatures  py_get_features(QStyleOptionTab* theWrappedObject){ return theWrappedObject->features; }
void py_set_icon(QStyleOptionTab* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionTab* theWrappedObject){ return theWrappedObject->icon; }
void py_set_iconSize(QStyleOptionTab* theWrappedObject, QSize  iconSize){ theWrappedObject->iconSize = iconSize; }
QSize  py_get_iconSize(QStyleOptionTab* theWrappedObject){ return theWrappedObject->iconSize; }
void py_set_leftButtonSize(QStyleOptionTab* theWrappedObject, QSize  leftButtonSize){ theWrappedObject->leftButtonSize = leftButtonSize; }
QSize  py_get_leftButtonSize(QStyleOptionTab* theWrappedObject){ return theWrappedObject->leftButtonSize; }
void py_set_position(QStyleOptionTab* theWrappedObject, QStyleOptionTab::TabPosition  position){ theWrappedObject->position = position; }
QStyleOptionTab::TabPosition  py_get_position(QStyleOptionTab* theWrappedObject){ return theWrappedObject->position; }
void py_set_rightButtonSize(QStyleOptionTab* theWrappedObject, QSize  rightButtonSize){ theWrappedObject->rightButtonSize = rightButtonSize; }
QSize  py_get_rightButtonSize(QStyleOptionTab* theWrappedObject){ return theWrappedObject->rightButtonSize; }
void py_set_row(QStyleOptionTab* theWrappedObject, int  row){ theWrappedObject->row = row; }
int  py_get_row(QStyleOptionTab* theWrappedObject){ return theWrappedObject->row; }
void py_set_selectedPosition(QStyleOptionTab* theWrappedObject, QStyleOptionTab::SelectedPosition  selectedPosition){ theWrappedObject->selectedPosition = selectedPosition; }
QStyleOptionTab::SelectedPosition  py_get_selectedPosition(QStyleOptionTab* theWrappedObject){ return theWrappedObject->selectedPosition; }
void py_set_shape(QStyleOptionTab* theWrappedObject, QTabBar::Shape  shape){ theWrappedObject->shape = shape; }
QTabBar::Shape  py_get_shape(QStyleOptionTab* theWrappedObject){ return theWrappedObject->shape; }
void py_set_text(QStyleOptionTab* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionTab* theWrappedObject){ return theWrappedObject->text; }
};





class PythonQtShell_QStyleOptionTabBarBase : public QStyleOptionTabBarBase
{
public:
    PythonQtShell_QStyleOptionTabBarBase():QStyleOptionTabBarBase(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabBarBase(const QStyleOptionTabBarBase&  other):QStyleOptionTabBarBase(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabBarBase(int  version):QStyleOptionTabBarBase(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionTabBarBase();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionTabBarBase : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionTabBarBase::Type};
enum StyleOptionVersion{
  Version = QStyleOptionTabBarBase::Version};
public slots:
QStyleOptionTabBarBase* new_QStyleOptionTabBarBase();
QStyleOptionTabBarBase* new_QStyleOptionTabBarBase(const QStyleOptionTabBarBase&  other);
QStyleOptionTabBarBase* new_QStyleOptionTabBarBase(int  version);
void delete_QStyleOptionTabBarBase(QStyleOptionTabBarBase* obj) { delete obj; } 
void py_set_documentMode(QStyleOptionTabBarBase* theWrappedObject, bool  documentMode){ theWrappedObject->documentMode = documentMode; }
bool  py_get_documentMode(QStyleOptionTabBarBase* theWrappedObject){ return theWrappedObject->documentMode; }
void py_set_selectedTabRect(QStyleOptionTabBarBase* theWrappedObject, QRect  selectedTabRect){ theWrappedObject->selectedTabRect = selectedTabRect; }
QRect  py_get_selectedTabRect(QStyleOptionTabBarBase* theWrappedObject){ return theWrappedObject->selectedTabRect; }
void py_set_shape(QStyleOptionTabBarBase* theWrappedObject, QTabBar::Shape  shape){ theWrappedObject->shape = shape; }
QTabBar::Shape  py_get_shape(QStyleOptionTabBarBase* theWrappedObject){ return theWrappedObject->shape; }
void py_set_tabBarRect(QStyleOptionTabBarBase* theWrappedObject, QRect  tabBarRect){ theWrappedObject->tabBarRect = tabBarRect; }
QRect  py_get_tabBarRect(QStyleOptionTabBarBase* theWrappedObject){ return theWrappedObject->tabBarRect; }
};





class PythonQtShell_QStyleOptionTabBarBaseV2 : public QStyleOptionTabBarBaseV2
{
public:
    PythonQtShell_QStyleOptionTabBarBaseV2():QStyleOptionTabBarBaseV2(),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionTabBarBaseV2();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionTabBarBaseV2 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionTabBarBaseV2* new_QStyleOptionTabBarBaseV2();
QStyleOptionTabBarBaseV2* new_QStyleOptionTabBarBaseV2(const QStyleOptionTabBarBaseV2& other) {
PythonQtShell_QStyleOptionTabBarBaseV2* a = new PythonQtShell_QStyleOptionTabBarBaseV2();
*((QStyleOptionTabBarBaseV2*)a) = other;
return a; }
void delete_QStyleOptionTabBarBaseV2(QStyleOptionTabBarBaseV2* obj) { delete obj; } 
};





class PythonQtShell_QStyleOptionTabV2 : public QStyleOptionTabV2
{
public:
    PythonQtShell_QStyleOptionTabV2():QStyleOptionTabV2(),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionTabV2();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionTabV2 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionTabV2* new_QStyleOptionTabV2();
QStyleOptionTabV2* new_QStyleOptionTabV2(const QStyleOptionTabV2& other) {
PythonQtShell_QStyleOptionTabV2* a = new PythonQtShell_QStyleOptionTabV2();
*((QStyleOptionTabV2*)a) = other;
return a; }
void delete_QStyleOptionTabV2(QStyleOptionTabV2* obj) { delete obj; } 
};





class PythonQtShell_QStyleOptionTabV3 : public QStyleOptionTabV3
{
public:
    PythonQtShell_QStyleOptionTabV3():QStyleOptionTabV3(),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionTabV3();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionTabV3 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionTabV3* new_QStyleOptionTabV3();
QStyleOptionTabV3* new_QStyleOptionTabV3(const QStyleOptionTabV3& other) {
PythonQtShell_QStyleOptionTabV3* a = new PythonQtShell_QStyleOptionTabV3();
*((QStyleOptionTabV3*)a) = other;
return a; }
void delete_QStyleOptionTabV3(QStyleOptionTabV3* obj) { delete obj; } 
};





class PythonQtShell_QStyleOptionTabWidgetFrame : public QStyleOptionTabWidgetFrame
{
public:
    PythonQtShell_QStyleOptionTabWidgetFrame():QStyleOptionTabWidgetFrame(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabWidgetFrame(const QStyleOptionTabWidgetFrame&  other):QStyleOptionTabWidgetFrame(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTabWidgetFrame(int  version):QStyleOptionTabWidgetFrame(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionTabWidgetFrame();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionTabWidgetFrame : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionTabWidgetFrame::Type};
enum StyleOptionVersion{
  Version = QStyleOptionTabWidgetFrame::Version};
public slots:
QStyleOptionTabWidgetFrame* new_QStyleOptionTabWidgetFrame();
QStyleOptionTabWidgetFrame* new_QStyleOptionTabWidgetFrame(const QStyleOptionTabWidgetFrame&  other);
QStyleOptionTabWidgetFrame* new_QStyleOptionTabWidgetFrame(int  version);
void delete_QStyleOptionTabWidgetFrame(QStyleOptionTabWidgetFrame* obj) { delete obj; } 
void py_set_leftCornerWidgetSize(QStyleOptionTabWidgetFrame* theWrappedObject, QSize  leftCornerWidgetSize){ theWrappedObject->leftCornerWidgetSize = leftCornerWidgetSize; }
QSize  py_get_leftCornerWidgetSize(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->leftCornerWidgetSize; }
void py_set_lineWidth(QStyleOptionTabWidgetFrame* theWrappedObject, int  lineWidth){ theWrappedObject->lineWidth = lineWidth; }
int  py_get_lineWidth(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->lineWidth; }
void py_set_midLineWidth(QStyleOptionTabWidgetFrame* theWrappedObject, int  midLineWidth){ theWrappedObject->midLineWidth = midLineWidth; }
int  py_get_midLineWidth(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->midLineWidth; }
void py_set_rightCornerWidgetSize(QStyleOptionTabWidgetFrame* theWrappedObject, QSize  rightCornerWidgetSize){ theWrappedObject->rightCornerWidgetSize = rightCornerWidgetSize; }
QSize  py_get_rightCornerWidgetSize(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->rightCornerWidgetSize; }
void py_set_selectedTabRect(QStyleOptionTabWidgetFrame* theWrappedObject, QRect  selectedTabRect){ theWrappedObject->selectedTabRect = selectedTabRect; }
QRect  py_get_selectedTabRect(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->selectedTabRect; }
void py_set_shape(QStyleOptionTabWidgetFrame* theWrappedObject, QTabBar::Shape  shape){ theWrappedObject->shape = shape; }
QTabBar::Shape  py_get_shape(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->shape; }
void py_set_tabBarRect(QStyleOptionTabWidgetFrame* theWrappedObject, QRect  tabBarRect){ theWrappedObject->tabBarRect = tabBarRect; }
QRect  py_get_tabBarRect(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->tabBarRect; }
void py_set_tabBarSize(QStyleOptionTabWidgetFrame* theWrappedObject, QSize  tabBarSize){ theWrappedObject->tabBarSize = tabBarSize; }
QSize  py_get_tabBarSize(QStyleOptionTabWidgetFrame* theWrappedObject){ return theWrappedObject->tabBarSize; }
};





class PythonQtShell_QStyleOptionTabWidgetFrameV2 : public QStyleOptionTabWidgetFrameV2
{
public:
    PythonQtShell_QStyleOptionTabWidgetFrameV2():QStyleOptionTabWidgetFrameV2(),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionTabWidgetFrameV2();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionTabWidgetFrameV2 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionTabWidgetFrameV2* new_QStyleOptionTabWidgetFrameV2();
QStyleOptionTabWidgetFrameV2* new_QStyleOptionTabWidgetFrameV2(const QStyleOptionTabWidgetFrameV2& other) {
PythonQtShell_QStyleOptionTabWidgetFrameV2* a = new PythonQtShell_QStyleOptionTabWidgetFrameV2();
*((QStyleOptionTabWidgetFrameV2*)a) = other;
return a; }
void delete_QStyleOptionTabWidgetFrameV2(QStyleOptionTabWidgetFrameV2* obj) { delete obj; } 
};





class PythonQtShell_QStyleOptionTitleBar : public QStyleOptionTitleBar
{
public:
    PythonQtShell_QStyleOptionTitleBar():QStyleOptionTitleBar(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTitleBar(const QStyleOptionTitleBar&  other):QStyleOptionTitleBar(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTitleBar(int  version):QStyleOptionTitleBar(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionTitleBar();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionTitleBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionTitleBar::Type};
enum StyleOptionVersion{
  Version = QStyleOptionTitleBar::Version};
public slots:
QStyleOptionTitleBar* new_QStyleOptionTitleBar();
QStyleOptionTitleBar* new_QStyleOptionTitleBar(const QStyleOptionTitleBar&  other);
QStyleOptionTitleBar* new_QStyleOptionTitleBar(int  version);
void delete_QStyleOptionTitleBar(QStyleOptionTitleBar* obj) { delete obj; } 
void py_set_icon(QStyleOptionTitleBar* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionTitleBar* theWrappedObject){ return theWrappedObject->icon; }
void py_set_text(QStyleOptionTitleBar* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionTitleBar* theWrappedObject){ return theWrappedObject->text; }
void py_set_titleBarFlags(QStyleOptionTitleBar* theWrappedObject, Qt::WindowFlags  titleBarFlags){ theWrappedObject->titleBarFlags = titleBarFlags; }
Qt::WindowFlags  py_get_titleBarFlags(QStyleOptionTitleBar* theWrappedObject){ return theWrappedObject->titleBarFlags; }
void py_set_titleBarState(QStyleOptionTitleBar* theWrappedObject, int  titleBarState){ theWrappedObject->titleBarState = titleBarState; }
int  py_get_titleBarState(QStyleOptionTitleBar* theWrappedObject){ return theWrappedObject->titleBarState; }
};





class PythonQtShell_QStyleOptionToolBar : public QStyleOptionToolBar
{
public:
    PythonQtShell_QStyleOptionToolBar():QStyleOptionToolBar(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionToolBar(const QStyleOptionToolBar&  other):QStyleOptionToolBar(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionToolBar(int  version):QStyleOptionToolBar(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionToolBar();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionToolBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion ToolBarFeature ToolBarPosition )
Q_FLAGS(ToolBarFeatures )
enum StyleOptionType{
  Type = QStyleOptionToolBar::Type};
enum StyleOptionVersion{
  Version = QStyleOptionToolBar::Version};
enum ToolBarFeature{
  None = QStyleOptionToolBar::None,   Movable = QStyleOptionToolBar::Movable};
enum ToolBarPosition{
  Beginning = QStyleOptionToolBar::Beginning,   Middle = QStyleOptionToolBar::Middle,   End = QStyleOptionToolBar::End,   OnlyOne = QStyleOptionToolBar::OnlyOne};
Q_DECLARE_FLAGS(ToolBarFeatures, ToolBarFeature)
public slots:
QStyleOptionToolBar* new_QStyleOptionToolBar();
QStyleOptionToolBar* new_QStyleOptionToolBar(const QStyleOptionToolBar&  other);
QStyleOptionToolBar* new_QStyleOptionToolBar(int  version);
void delete_QStyleOptionToolBar(QStyleOptionToolBar* obj) { delete obj; } 
void py_set_features(QStyleOptionToolBar* theWrappedObject, QStyleOptionToolBar::ToolBarFeatures  features){ theWrappedObject->features = features; }
QStyleOptionToolBar::ToolBarFeatures  py_get_features(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->features; }
void py_set_lineWidth(QStyleOptionToolBar* theWrappedObject, int  lineWidth){ theWrappedObject->lineWidth = lineWidth; }
int  py_get_lineWidth(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->lineWidth; }
void py_set_midLineWidth(QStyleOptionToolBar* theWrappedObject, int  midLineWidth){ theWrappedObject->midLineWidth = midLineWidth; }
int  py_get_midLineWidth(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->midLineWidth; }
void py_set_positionOfLine(QStyleOptionToolBar* theWrappedObject, QStyleOptionToolBar::ToolBarPosition  positionOfLine){ theWrappedObject->positionOfLine = positionOfLine; }
QStyleOptionToolBar::ToolBarPosition  py_get_positionOfLine(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->positionOfLine; }
void py_set_positionWithinLine(QStyleOptionToolBar* theWrappedObject, QStyleOptionToolBar::ToolBarPosition  positionWithinLine){ theWrappedObject->positionWithinLine = positionWithinLine; }
QStyleOptionToolBar::ToolBarPosition  py_get_positionWithinLine(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->positionWithinLine; }
void py_set_toolBarArea(QStyleOptionToolBar* theWrappedObject, Qt::ToolBarArea  toolBarArea){ theWrappedObject->toolBarArea = toolBarArea; }
Qt::ToolBarArea  py_get_toolBarArea(QStyleOptionToolBar* theWrappedObject){ return theWrappedObject->toolBarArea; }
};





class PythonQtShell_QStyleOptionToolBox : public QStyleOptionToolBox
{
public:
    PythonQtShell_QStyleOptionToolBox():QStyleOptionToolBox(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionToolBox(const QStyleOptionToolBox&  other):QStyleOptionToolBox(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionToolBox(int  version):QStyleOptionToolBox(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionToolBox();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionToolBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SelectedPosition StyleOptionType StyleOptionVersion TabPosition )
enum SelectedPosition{
  NotAdjacent = QStyleOptionToolBox::NotAdjacent,   NextIsSelected = QStyleOptionToolBox::NextIsSelected,   PreviousIsSelected = QStyleOptionToolBox::PreviousIsSelected};
enum StyleOptionType{
  Type = QStyleOptionToolBox::Type};
enum StyleOptionVersion{
  Version = QStyleOptionToolBox::Version};
enum TabPosition{
  Beginning = QStyleOptionToolBox::Beginning,   Middle = QStyleOptionToolBox::Middle,   End = QStyleOptionToolBox::End,   OnlyOneTab = QStyleOptionToolBox::OnlyOneTab};
public slots:
QStyleOptionToolBox* new_QStyleOptionToolBox();
QStyleOptionToolBox* new_QStyleOptionToolBox(const QStyleOptionToolBox&  other);
QStyleOptionToolBox* new_QStyleOptionToolBox(int  version);
void delete_QStyleOptionToolBox(QStyleOptionToolBox* obj) { delete obj; } 
void py_set_icon(QStyleOptionToolBox* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionToolBox* theWrappedObject){ return theWrappedObject->icon; }
void py_set_position(QStyleOptionToolBox* theWrappedObject, QStyleOptionToolBox::TabPosition  position){ theWrappedObject->position = position; }
QStyleOptionToolBox::TabPosition  py_get_position(QStyleOptionToolBox* theWrappedObject){ return theWrappedObject->position; }
void py_set_selectedPosition(QStyleOptionToolBox* theWrappedObject, QStyleOptionToolBox::SelectedPosition  selectedPosition){ theWrappedObject->selectedPosition = selectedPosition; }
QStyleOptionToolBox::SelectedPosition  py_get_selectedPosition(QStyleOptionToolBox* theWrappedObject){ return theWrappedObject->selectedPosition; }
void py_set_text(QStyleOptionToolBox* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionToolBox* theWrappedObject){ return theWrappedObject->text; }
};





class PythonQtShell_QStyleOptionToolBoxV2 : public QStyleOptionToolBoxV2
{
public:
    PythonQtShell_QStyleOptionToolBoxV2():QStyleOptionToolBoxV2(),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionToolBoxV2();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionToolBoxV2 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionToolBoxV2* new_QStyleOptionToolBoxV2();
QStyleOptionToolBoxV2* new_QStyleOptionToolBoxV2(const QStyleOptionToolBoxV2& other) {
PythonQtShell_QStyleOptionToolBoxV2* a = new PythonQtShell_QStyleOptionToolBoxV2();
*((QStyleOptionToolBoxV2*)a) = other;
return a; }
void delete_QStyleOptionToolBoxV2(QStyleOptionToolBoxV2* obj) { delete obj; } 
};





class PythonQtShell_QStyleOptionToolButton : public QStyleOptionToolButton
{
public:
    PythonQtShell_QStyleOptionToolButton():QStyleOptionToolButton(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionToolButton(const QStyleOptionToolButton&  other):QStyleOptionToolButton(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionToolButton(int  version):QStyleOptionToolButton(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionToolButton();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionToolButton : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion ToolButtonFeature )
Q_FLAGS(ToolButtonFeatures )
enum StyleOptionType{
  Type = QStyleOptionToolButton::Type};
enum StyleOptionVersion{
  Version = QStyleOptionToolButton::Version};
enum ToolButtonFeature{
  None = QStyleOptionToolButton::None,   Arrow = QStyleOptionToolButton::Arrow,   Menu = QStyleOptionToolButton::Menu,   MenuButtonPopup = QStyleOptionToolButton::MenuButtonPopup,   PopupDelay = QStyleOptionToolButton::PopupDelay,   HasMenu = QStyleOptionToolButton::HasMenu};
Q_DECLARE_FLAGS(ToolButtonFeatures, ToolButtonFeature)
public slots:
QStyleOptionToolButton* new_QStyleOptionToolButton();
QStyleOptionToolButton* new_QStyleOptionToolButton(const QStyleOptionToolButton&  other);
QStyleOptionToolButton* new_QStyleOptionToolButton(int  version);
void delete_QStyleOptionToolButton(QStyleOptionToolButton* obj) { delete obj; } 
void py_set_arrowType(QStyleOptionToolButton* theWrappedObject, Qt::ArrowType  arrowType){ theWrappedObject->arrowType = arrowType; }
Qt::ArrowType  py_get_arrowType(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->arrowType; }
void py_set_features(QStyleOptionToolButton* theWrappedObject, QStyleOptionToolButton::ToolButtonFeatures  features){ theWrappedObject->features = features; }
QStyleOptionToolButton::ToolButtonFeatures  py_get_features(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->features; }
void py_set_font(QStyleOptionToolButton* theWrappedObject, QFont  font){ theWrappedObject->font = font; }
QFont  py_get_font(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->font; }
void py_set_icon(QStyleOptionToolButton* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->icon; }
void py_set_iconSize(QStyleOptionToolButton* theWrappedObject, QSize  iconSize){ theWrappedObject->iconSize = iconSize; }
QSize  py_get_iconSize(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->iconSize; }
void py_set_pos(QStyleOptionToolButton* theWrappedObject, QPoint  pos){ theWrappedObject->pos = pos; }
QPoint  py_get_pos(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->pos; }
void py_set_text(QStyleOptionToolButton* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->text; }
void py_set_toolButtonStyle(QStyleOptionToolButton* theWrappedObject, Qt::ToolButtonStyle  toolButtonStyle){ theWrappedObject->toolButtonStyle = toolButtonStyle; }
Qt::ToolButtonStyle  py_get_toolButtonStyle(QStyleOptionToolButton* theWrappedObject){ return theWrappedObject->toolButtonStyle; }
};





class PythonQtShell_QStyleOptionViewItem : public QStyleOptionViewItem
{
public:
    PythonQtShell_QStyleOptionViewItem():QStyleOptionViewItem(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionViewItem(const QStyleOptionViewItem&  other):QStyleOptionViewItem(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionViewItem(int  version):QStyleOptionViewItem(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionViewItem();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionViewItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Position StyleOptionType StyleOptionVersion ViewItemFeature ViewItemPosition )
Q_FLAGS(ViewItemFeatures )
enum Position{
  Left = QStyleOptionViewItem::Left,   Right = QStyleOptionViewItem::Right,   Top = QStyleOptionViewItem::Top,   Bottom = QStyleOptionViewItem::Bottom};
enum StyleOptionType{
  Type = QStyleOptionViewItem::Type};
enum StyleOptionVersion{
  Version = QStyleOptionViewItem::Version};
enum ViewItemFeature{
  None = QStyleOptionViewItem::None,   WrapText = QStyleOptionViewItem::WrapText,   Alternate = QStyleOptionViewItem::Alternate,   HasCheckIndicator = QStyleOptionViewItem::HasCheckIndicator,   HasDisplay = QStyleOptionViewItem::HasDisplay,   HasDecoration = QStyleOptionViewItem::HasDecoration};
enum ViewItemPosition{
  Invalid = QStyleOptionViewItem::Invalid,   Beginning = QStyleOptionViewItem::Beginning,   Middle = QStyleOptionViewItem::Middle,   End = QStyleOptionViewItem::End,   OnlyOne = QStyleOptionViewItem::OnlyOne};
Q_DECLARE_FLAGS(ViewItemFeatures, ViewItemFeature)
public slots:
QStyleOptionViewItem* new_QStyleOptionViewItem();
QStyleOptionViewItem* new_QStyleOptionViewItem(const QStyleOptionViewItem&  other);
QStyleOptionViewItem* new_QStyleOptionViewItem(int  version);
void delete_QStyleOptionViewItem(QStyleOptionViewItem* obj) { delete obj; } 
void py_set_backgroundBrush(QStyleOptionViewItem* theWrappedObject, QBrush  backgroundBrush){ theWrappedObject->backgroundBrush = backgroundBrush; }
QBrush  py_get_backgroundBrush(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->backgroundBrush; }
void py_set_checkState(QStyleOptionViewItem* theWrappedObject, Qt::CheckState  checkState){ theWrappedObject->checkState = checkState; }
Qt::CheckState  py_get_checkState(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->checkState; }
void py_set_decorationAlignment(QStyleOptionViewItem* theWrappedObject, Qt::Alignment  decorationAlignment){ theWrappedObject->decorationAlignment = decorationAlignment; }
Qt::Alignment  py_get_decorationAlignment(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->decorationAlignment; }
void py_set_decorationPosition(QStyleOptionViewItem* theWrappedObject, QStyleOptionViewItem::Position  decorationPosition){ theWrappedObject->decorationPosition = decorationPosition; }
QStyleOptionViewItem::Position  py_get_decorationPosition(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->decorationPosition; }
void py_set_decorationSize(QStyleOptionViewItem* theWrappedObject, QSize  decorationSize){ theWrappedObject->decorationSize = decorationSize; }
QSize  py_get_decorationSize(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->decorationSize; }
void py_set_displayAlignment(QStyleOptionViewItem* theWrappedObject, Qt::Alignment  displayAlignment){ theWrappedObject->displayAlignment = displayAlignment; }
Qt::Alignment  py_get_displayAlignment(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->displayAlignment; }
void py_set_features(QStyleOptionViewItem* theWrappedObject, QStyleOptionViewItem::ViewItemFeatures  features){ theWrappedObject->features = features; }
QStyleOptionViewItem::ViewItemFeatures  py_get_features(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->features; }
void py_set_font(QStyleOptionViewItem* theWrappedObject, QFont  font){ theWrappedObject->font = font; }
QFont  py_get_font(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->font; }
void py_set_icon(QStyleOptionViewItem* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->icon; }
void py_set_index(QStyleOptionViewItem* theWrappedObject, QModelIndex  index){ theWrappedObject->index = index; }
QModelIndex  py_get_index(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->index; }
void py_set_locale(QStyleOptionViewItem* theWrappedObject, QLocale  locale){ theWrappedObject->locale = locale; }
QLocale  py_get_locale(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->locale; }
void py_set_showDecorationSelected(QStyleOptionViewItem* theWrappedObject, bool  showDecorationSelected){ theWrappedObject->showDecorationSelected = showDecorationSelected; }
bool  py_get_showDecorationSelected(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->showDecorationSelected; }
void py_set_text(QStyleOptionViewItem* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->text; }
void py_set_textElideMode(QStyleOptionViewItem* theWrappedObject, Qt::TextElideMode  textElideMode){ theWrappedObject->textElideMode = textElideMode; }
Qt::TextElideMode  py_get_textElideMode(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->textElideMode; }
void py_set_viewItemPosition(QStyleOptionViewItem* theWrappedObject, QStyleOptionViewItem::ViewItemPosition  viewItemPosition){ theWrappedObject->viewItemPosition = viewItemPosition; }
QStyleOptionViewItem::ViewItemPosition  py_get_viewItemPosition(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->viewItemPosition; }
const QWidget*  py_get_widget(QStyleOptionViewItem* theWrappedObject){ return theWrappedObject->widget; }
};





class PythonQtShell_QStyleOptionViewItemV2 : public QStyleOptionViewItemV2
{
public:
    PythonQtShell_QStyleOptionViewItemV2():QStyleOptionViewItemV2(),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionViewItemV2();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionViewItemV2 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionViewItemV2* new_QStyleOptionViewItemV2();
QStyleOptionViewItemV2* new_QStyleOptionViewItemV2(const QStyleOptionViewItemV2& other) {
PythonQtShell_QStyleOptionViewItemV2* a = new PythonQtShell_QStyleOptionViewItemV2();
*((QStyleOptionViewItemV2*)a) = other;
return a; }
void delete_QStyleOptionViewItemV2(QStyleOptionViewItemV2* obj) { delete obj; } 
};





class PythonQtShell_QStyleOptionViewItemV3 : public QStyleOptionViewItemV3
{
public:
    PythonQtShell_QStyleOptionViewItemV3():QStyleOptionViewItemV3(),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionViewItemV3();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionViewItemV3 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionViewItemV3* new_QStyleOptionViewItemV3();
QStyleOptionViewItemV3* new_QStyleOptionViewItemV3(const QStyleOptionViewItemV3& other) {
PythonQtShell_QStyleOptionViewItemV3* a = new PythonQtShell_QStyleOptionViewItemV3();
*((QStyleOptionViewItemV3*)a) = other;
return a; }
void delete_QStyleOptionViewItemV3(QStyleOptionViewItemV3* obj) { delete obj; } 
};





class PythonQtShell_QStyleOptionViewItemV4 : public QStyleOptionViewItemV4
{
public:
    PythonQtShell_QStyleOptionViewItemV4():QStyleOptionViewItemV4(),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionViewItemV4();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QStyleOptionViewItemV4 : public QObject
{ Q_OBJECT
public:
public slots:
QStyleOptionViewItemV4* new_QStyleOptionViewItemV4();
QStyleOptionViewItemV4* new_QStyleOptionViewItemV4(const QStyleOptionViewItemV4& other) {
PythonQtShell_QStyleOptionViewItemV4* a = new PythonQtShell_QStyleOptionViewItemV4();
*((QStyleOptionViewItemV4*)a) = other;
return a; }
void delete_QStyleOptionViewItemV4(QStyleOptionViewItemV4* obj) { delete obj; } 
};





class PythonQtWrapper_QStylePainter : public QObject
{ Q_OBJECT
public:
public slots:
QStylePainter* new_QStylePainter();
QStylePainter* new_QStylePainter(QPaintDevice*  pd, QWidget*  w);
QStylePainter* new_QStylePainter(QWidget*  w);
void delete_QStylePainter(QStylePainter* obj) { delete obj; } 
   bool  begin(QStylePainter* theWrappedObject, QPaintDevice*  pd, QWidget*  w);
   bool  begin(QStylePainter* theWrappedObject, QWidget*  w);
   void drawComplexControl(QStylePainter* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex&  opt);
   void drawControl(QStylePainter* theWrappedObject, QStyle::ControlElement  ce, const QStyleOption&  opt);
   void drawItemPixmap(QStylePainter* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap);
   void drawItemText(QStylePainter* theWrappedObject, const QRect&  r, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole);
   void drawPrimitive(QStylePainter* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption&  opt);
   QStyle*  style(QStylePainter* theWrappedObject) const;
};





class PythonQtShell_QStylePlugin : public QStylePlugin
{
public:
    PythonQtShell_QStylePlugin(QObject*  parent = 0):QStylePlugin(parent),_wrapper(NULL) {};

   ~PythonQtShell_QStylePlugin();

virtual void childEvent(QChildEvent*  arg__1);
virtual QStyle*  create(const QString&  key);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStylePlugin : public QStylePlugin
{ public:
inline QStyle*  promoted_create(const QString&  key) { return this->create(key); }
};

class PythonQtWrapper_QStylePlugin : public QObject
{ Q_OBJECT
public:
public slots:
QStylePlugin* new_QStylePlugin(QObject*  parent = 0);
void delete_QStylePlugin(QStylePlugin* obj) { delete obj; } 
   QStyle*  create(QStylePlugin* theWrappedObject, const QString&  key);
};





class PythonQtShell_QStyledItemDelegate : public QStyledItemDelegate
{
public:
    PythonQtShell_QStyledItemDelegate(QObject*  parent = 0):QStyledItemDelegate(parent),_wrapper(NULL) {};

   ~PythonQtShell_QStyledItemDelegate();

virtual void childEvent(QChildEvent*  arg__1);
virtual QWidget*  createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void customEvent(QEvent*  arg__1);
virtual void destroyEditor(QWidget*  editor, const QModelIndex&  index) const;
virtual QString  displayText(const QVariant&  value, const QLocale&  locale) const;
virtual bool  editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  object, QEvent*  event);
virtual bool  helpEvent(QHelpEvent*  event, QAbstractItemView*  view, const QStyleOptionViewItem&  option, const QModelIndex&  index);
virtual void initStyleOption(QStyleOptionViewItem*  option, const QModelIndex&  index) const;
virtual void paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual QVector<int >  paintingRoles() const;
virtual void setEditorData(QWidget*  editor, const QModelIndex&  index) const;
virtual void setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const;
virtual QSize  sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QStyledItemDelegate : public QStyledItemDelegate
{ public:
inline QWidget*  promoted_createEditor(QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QStyledItemDelegate::createEditor(parent, option, index); }
inline QString  promoted_displayText(const QVariant&  value, const QLocale&  locale) const { return QStyledItemDelegate::displayText(value, locale); }
inline bool  promoted_editorEvent(QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index) { return QStyledItemDelegate::editorEvent(event, model, option, index); }
inline bool  promoted_eventFilter(QObject*  object, QEvent*  event) { return QStyledItemDelegate::eventFilter(object, event); }
inline void promoted_initStyleOption(QStyleOptionViewItem*  option, const QModelIndex&  index) const { QStyledItemDelegate::initStyleOption(option, index); }
inline void promoted_paint(QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QStyledItemDelegate::paint(painter, option, index); }
inline void promoted_setEditorData(QWidget*  editor, const QModelIndex&  index) const { QStyledItemDelegate::setEditorData(editor, index); }
inline void promoted_setModelData(QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const { QStyledItemDelegate::setModelData(editor, model, index); }
inline QSize  promoted_sizeHint(const QStyleOptionViewItem&  option, const QModelIndex&  index) const { return QStyledItemDelegate::sizeHint(option, index); }
inline void promoted_updateEditorGeometry(QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const { QStyledItemDelegate::updateEditorGeometry(editor, option, index); }
};

class PythonQtWrapper_QStyledItemDelegate : public QObject
{ Q_OBJECT
public:
public slots:
QStyledItemDelegate* new_QStyledItemDelegate(QObject*  parent = 0);
void delete_QStyledItemDelegate(QStyledItemDelegate* obj) { delete obj; } 
   QWidget*  createEditor(QStyledItemDelegate* theWrappedObject, QWidget*  parent, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   QString  displayText(QStyledItemDelegate* theWrappedObject, const QVariant&  value, const QLocale&  locale) const;
   bool  editorEvent(QStyledItemDelegate* theWrappedObject, QEvent*  event, QAbstractItemModel*  model, const QStyleOptionViewItem&  option, const QModelIndex&  index);
   bool  eventFilter(QStyledItemDelegate* theWrappedObject, QObject*  object, QEvent*  event);
   void initStyleOption(QStyledItemDelegate* theWrappedObject, QStyleOptionViewItem*  option, const QModelIndex&  index) const;
   QItemEditorFactory*  itemEditorFactory(QStyledItemDelegate* theWrappedObject) const;
   void paint(QStyledItemDelegate* theWrappedObject, QPainter*  painter, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void setEditorData(QStyledItemDelegate* theWrappedObject, QWidget*  editor, const QModelIndex&  index) const;
   void setItemEditorFactory(QStyledItemDelegate* theWrappedObject, QItemEditorFactory*  factory);
   void setModelData(QStyledItemDelegate* theWrappedObject, QWidget*  editor, QAbstractItemModel*  model, const QModelIndex&  index) const;
   QSize  sizeHint(QStyledItemDelegate* theWrappedObject, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
   void updateEditorGeometry(QStyledItemDelegate* theWrappedObject, QWidget*  editor, const QStyleOptionViewItem&  option, const QModelIndex&  index) const;
};





class PythonQtShell_QSurface : public QSurface
{
public:
    PythonQtShell_QSurface(QSurface::SurfaceClass  type):QSurface(type),_wrapper(NULL) {};

   ~PythonQtShell_QSurface();

virtual QSurfaceFormat  format() const;
virtual QSize  size() const;
virtual QPlatformSurface*  surfaceHandle() const;
virtual QSurface::SurfaceType  surfaceType() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSurface : public QSurface
{ public:
inline QSurfaceFormat  promoted_format() const { return this->format(); }
inline QSize  promoted_size() const { return this->size(); }
inline QPlatformSurface*  promoted_surfaceHandle() const { return this->surfaceHandle(); }
inline QSurface::SurfaceType  promoted_surfaceType() const { return this->surfaceType(); }
};

class PythonQtWrapper_QSurface : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SurfaceClass SurfaceType )
enum SurfaceClass{
  Window = QSurface::Window,   Offscreen = QSurface::Offscreen};
enum SurfaceType{
  RasterSurface = QSurface::RasterSurface,   OpenGLSurface = QSurface::OpenGLSurface,   RasterGLSurface = QSurface::RasterGLSurface};
public slots:
QSurface* new_QSurface(QSurface::SurfaceClass  type);
void delete_QSurface(QSurface* obj) { delete obj; } 
   QSurfaceFormat  format(QSurface* theWrappedObject) const;
   QSize  size(QSurface* theWrappedObject) const;
   bool  supportsOpenGL(QSurface* theWrappedObject) const;
   QSurface::SurfaceClass  surfaceClass(QSurface* theWrappedObject) const;
   QPlatformSurface*  surfaceHandle(QSurface* theWrappedObject) const;
   QSurface::SurfaceType  surfaceType(QSurface* theWrappedObject) const;
};





class PythonQtWrapper_QSurfaceFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FormatOption OpenGLContextProfile RenderableType SwapBehavior )
Q_FLAGS(FormatOptions )
enum FormatOption{
  StereoBuffers = QSurfaceFormat::StereoBuffers,   DebugContext = QSurfaceFormat::DebugContext,   DeprecatedFunctions = QSurfaceFormat::DeprecatedFunctions};
enum OpenGLContextProfile{
  NoProfile = QSurfaceFormat::NoProfile,   CoreProfile = QSurfaceFormat::CoreProfile,   CompatibilityProfile = QSurfaceFormat::CompatibilityProfile};
enum RenderableType{
  DefaultRenderableType = QSurfaceFormat::DefaultRenderableType,   OpenGL = QSurfaceFormat::OpenGL,   OpenGLES = QSurfaceFormat::OpenGLES,   OpenVG = QSurfaceFormat::OpenVG};
enum SwapBehavior{
  DefaultSwapBehavior = QSurfaceFormat::DefaultSwapBehavior,   SingleBuffer = QSurfaceFormat::SingleBuffer,   DoubleBuffer = QSurfaceFormat::DoubleBuffer,   TripleBuffer = QSurfaceFormat::TripleBuffer};
Q_DECLARE_FLAGS(FormatOptions, FormatOption)
public slots:
QSurfaceFormat* new_QSurfaceFormat();
QSurfaceFormat* new_QSurfaceFormat(QSurfaceFormat::FormatOptions  options);
QSurfaceFormat* new_QSurfaceFormat(const QSurfaceFormat&  other);
void delete_QSurfaceFormat(QSurfaceFormat* obj) { delete obj; } 
   int  alphaBufferSize(QSurfaceFormat* theWrappedObject) const;
   int  blueBufferSize(QSurfaceFormat* theWrappedObject) const;
   int  depthBufferSize(QSurfaceFormat* theWrappedObject) const;
   int  greenBufferSize(QSurfaceFormat* theWrappedObject) const;
   bool  hasAlpha(QSurfaceFormat* theWrappedObject) const;
   int  majorVersion(QSurfaceFormat* theWrappedObject) const;
   int  minorVersion(QSurfaceFormat* theWrappedObject) const;
   QSurfaceFormat*  operator_assign(QSurfaceFormat* theWrappedObject, const QSurfaceFormat&  other);
   bool  __eq__(QSurfaceFormat* theWrappedObject, const QSurfaceFormat&  arg__2);
   QSurfaceFormat::FormatOptions  options(QSurfaceFormat* theWrappedObject) const;
   QSurfaceFormat::OpenGLContextProfile  profile(QSurfaceFormat* theWrappedObject) const;
   int  redBufferSize(QSurfaceFormat* theWrappedObject) const;
   QSurfaceFormat::RenderableType  renderableType(QSurfaceFormat* theWrappedObject) const;
   int  samples(QSurfaceFormat* theWrappedObject) const;
   void setAlphaBufferSize(QSurfaceFormat* theWrappedObject, int  size);
   void setBlueBufferSize(QSurfaceFormat* theWrappedObject, int  size);
   void setDepthBufferSize(QSurfaceFormat* theWrappedObject, int  size);
   void setGreenBufferSize(QSurfaceFormat* theWrappedObject, int  size);
   void setMajorVersion(QSurfaceFormat* theWrappedObject, int  majorVersion);
   void setMinorVersion(QSurfaceFormat* theWrappedObject, int  minorVersion);
   void setOption(QSurfaceFormat* theWrappedObject, QSurfaceFormat::FormatOptions  opt);
   void setOption(QSurfaceFormat* theWrappedObject, QSurfaceFormat::FormatOption  option, bool  on = true);
   void setOptions(QSurfaceFormat* theWrappedObject, QSurfaceFormat::FormatOptions  options);
   void setProfile(QSurfaceFormat* theWrappedObject, QSurfaceFormat::OpenGLContextProfile  profile);
   void setRedBufferSize(QSurfaceFormat* theWrappedObject, int  size);
   void setRenderableType(QSurfaceFormat* theWrappedObject, QSurfaceFormat::RenderableType  type);
   void setSamples(QSurfaceFormat* theWrappedObject, int  numSamples);
   void setStencilBufferSize(QSurfaceFormat* theWrappedObject, int  size);
   void setStereo(QSurfaceFormat* theWrappedObject, bool  enable);
   void setSwapBehavior(QSurfaceFormat* theWrappedObject, QSurfaceFormat::SwapBehavior  behavior);
   void setSwapInterval(QSurfaceFormat* theWrappedObject, int  interval);
   void setVersion(QSurfaceFormat* theWrappedObject, int  major, int  minor);
   int  stencilBufferSize(QSurfaceFormat* theWrappedObject) const;
   bool  stereo(QSurfaceFormat* theWrappedObject) const;
   QSurfaceFormat::SwapBehavior  swapBehavior(QSurfaceFormat* theWrappedObject) const;
   int  swapInterval(QSurfaceFormat* theWrappedObject) const;
   bool  testOption(QSurfaceFormat* theWrappedObject, QSurfaceFormat::FormatOptions  opt) const;
   bool  testOption(QSurfaceFormat* theWrappedObject, QSurfaceFormat::FormatOption  option) const;
   QPair<int , int >  version(QSurfaceFormat* theWrappedObject) const;
    QString py_toString(QSurfaceFormat*);
};





class PythonQtShell_QSwipeGesture : public QSwipeGesture
{
public:
    PythonQtShell_QSwipeGesture(QObject*  parent = 0):QSwipeGesture(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSwipeGesture();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSwipeGesture : public QObject
{ Q_OBJECT
public:
public slots:
QSwipeGesture* new_QSwipeGesture(QObject*  parent = 0);
void delete_QSwipeGesture(QSwipeGesture* obj) { delete obj; } 
   QSwipeGesture::SwipeDirection  horizontalDirection(QSwipeGesture* theWrappedObject) const;
   void setSwipeAngle(QSwipeGesture* theWrappedObject, qreal  value);
   qreal  swipeAngle(QSwipeGesture* theWrappedObject) const;
   QSwipeGesture::SwipeDirection  verticalDirection(QSwipeGesture* theWrappedObject) const;
};





class PythonQtShell_QSyntaxHighlighter : public QSyntaxHighlighter
{
public:
    PythonQtShell_QSyntaxHighlighter(QObject*  parent):QSyntaxHighlighter(parent),_wrapper(NULL) {};
    PythonQtShell_QSyntaxHighlighter(QTextDocument*  parent):QSyntaxHighlighter(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSyntaxHighlighter();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void highlightBlock(const QString&  text);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSyntaxHighlighter : public QSyntaxHighlighter
{ public:
inline QTextBlock  promoted_currentBlock() const { return QSyntaxHighlighter::currentBlock(); }
inline int  promoted_currentBlockState() const { return QSyntaxHighlighter::currentBlockState(); }
inline QTextBlockUserData*  promoted_currentBlockUserData() const { return QSyntaxHighlighter::currentBlockUserData(); }
inline QTextCharFormat  promoted_format(int  pos) const { return QSyntaxHighlighter::format(pos); }
inline void promoted_highlightBlock(const QString&  text) { this->highlightBlock(text); }
inline int  promoted_previousBlockState() const { return QSyntaxHighlighter::previousBlockState(); }
inline void promoted_setCurrentBlockState(int  newState) { QSyntaxHighlighter::setCurrentBlockState(newState); }
inline void promoted_setCurrentBlockUserData(QTextBlockUserData*  data) { QSyntaxHighlighter::setCurrentBlockUserData(data); }
inline void promoted_setFormat(int  start, int  count, const QColor&  color) { QSyntaxHighlighter::setFormat(start, count, color); }
inline void promoted_setFormat(int  start, int  count, const QFont&  font) { QSyntaxHighlighter::setFormat(start, count, font); }
inline void promoted_setFormat(int  start, int  count, const QTextCharFormat&  format) { QSyntaxHighlighter::setFormat(start, count, format); }
};

class PythonQtWrapper_QSyntaxHighlighter : public QObject
{ Q_OBJECT
public:
public slots:
QSyntaxHighlighter* new_QSyntaxHighlighter(QObject*  parent);
QSyntaxHighlighter* new_QSyntaxHighlighter(QTextDocument*  parent);
void delete_QSyntaxHighlighter(QSyntaxHighlighter* obj) { delete obj; } 
   QTextBlock  currentBlock(QSyntaxHighlighter* theWrappedObject) const;
   int  currentBlockState(QSyntaxHighlighter* theWrappedObject) const;
   QTextBlockUserData*  currentBlockUserData(QSyntaxHighlighter* theWrappedObject) const;
   QTextDocument*  document(QSyntaxHighlighter* theWrappedObject) const;
   QTextCharFormat  format(QSyntaxHighlighter* theWrappedObject, int  pos) const;
   void highlightBlock(QSyntaxHighlighter* theWrappedObject, const QString&  text);
   int  previousBlockState(QSyntaxHighlighter* theWrappedObject) const;
   void setCurrentBlockState(QSyntaxHighlighter* theWrappedObject, int  newState);
   void setCurrentBlockUserData(QSyntaxHighlighter* theWrappedObject, QTextBlockUserData*  data);
   void setDocument(QSyntaxHighlighter* theWrappedObject, QTextDocument*  doc);
   void setFormat(QSyntaxHighlighter* theWrappedObject, int  start, int  count, const QColor&  color);
   void setFormat(QSyntaxHighlighter* theWrappedObject, int  start, int  count, const QFont&  font);
   void setFormat(QSyntaxHighlighter* theWrappedObject, int  start, int  count, const QTextCharFormat&  format);
};





class PythonQtShell_QSystemTrayIcon : public QSystemTrayIcon
{
public:
    PythonQtShell_QSystemTrayIcon(QObject*  parent = 0):QSystemTrayIcon(parent),_wrapper(NULL) {};
    PythonQtShell_QSystemTrayIcon(const QIcon&  icon, QObject*  parent = 0):QSystemTrayIcon(icon, parent),_wrapper(NULL) {};

   ~PythonQtShell_QSystemTrayIcon();

virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSystemTrayIcon : public QSystemTrayIcon
{ public:
inline bool  promoted_event(QEvent*  event) { return QSystemTrayIcon::event(event); }
};

class PythonQtWrapper_QSystemTrayIcon : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ActivationReason MessageIcon )
enum ActivationReason{
  Unknown = QSystemTrayIcon::Unknown,   Context = QSystemTrayIcon::Context,   DoubleClick = QSystemTrayIcon::DoubleClick,   Trigger = QSystemTrayIcon::Trigger,   MiddleClick = QSystemTrayIcon::MiddleClick};
enum MessageIcon{
  NoIcon = QSystemTrayIcon::NoIcon,   Information = QSystemTrayIcon::Information,   Warning = QSystemTrayIcon::Warning,   Critical = QSystemTrayIcon::Critical};
public slots:
QSystemTrayIcon* new_QSystemTrayIcon(QObject*  parent = 0);
QSystemTrayIcon* new_QSystemTrayIcon(const QIcon&  icon, QObject*  parent = 0);
void delete_QSystemTrayIcon(QSystemTrayIcon* obj) { delete obj; } 
   QMenu*  contextMenu(QSystemTrayIcon* theWrappedObject) const;
   bool  event(QSystemTrayIcon* theWrappedObject, QEvent*  event);
   QRect  geometry(QSystemTrayIcon* theWrappedObject) const;
   QIcon  icon(QSystemTrayIcon* theWrappedObject) const;
   bool  static_QSystemTrayIcon_isSystemTrayAvailable();
   bool  isVisible(QSystemTrayIcon* theWrappedObject) const;
   void setContextMenu(QSystemTrayIcon* theWrappedObject, QMenu*  menu);
   void setIcon(QSystemTrayIcon* theWrappedObject, const QIcon&  icon);
   void setToolTip(QSystemTrayIcon* theWrappedObject, const QString&  tip);
   bool  static_QSystemTrayIcon_supportsMessages();
   QString  toolTip(QSystemTrayIcon* theWrappedObject) const;
};





class PythonQtShell_QTabBar : public QTabBar
{
public:
    PythonQtShell_QTabBar(QWidget*  parent = 0):QTabBar(parent),_wrapper(NULL) {};

   ~PythonQtShell_QTabBar();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumTabSizeHint(int  index) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabInserted(int  index);
virtual void tabLayoutChange();
virtual void tabRemoved(int  index);
virtual QSize  tabSizeHint(int  index) const;
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  event);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTabBar : public QTabBar
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { QTabBar::changeEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QTabBar::event(arg__1); }
inline void promoted_hideEvent(QHideEvent*  arg__1) { QTabBar::hideEvent(arg__1); }
inline void promoted_initStyleOption(QStyleOptionTab*  option, int  tabIndex) const { QTabBar::initStyleOption(option, tabIndex); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QTabBar::keyPressEvent(arg__1); }
inline QSize  promoted_minimumTabSizeHint(int  index) const { return QTabBar::minimumTabSizeHint(index); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QTabBar::mouseMoveEvent(arg__1); }
inline void promoted_mousePressEvent(QMouseEvent*  arg__1) { QTabBar::mousePressEvent(arg__1); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  arg__1) { QTabBar::mouseReleaseEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QTabBar::paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QTabBar::resizeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QTabBar::showEvent(arg__1); }
inline void promoted_tabInserted(int  index) { QTabBar::tabInserted(index); }
inline void promoted_tabLayoutChange() { QTabBar::tabLayoutChange(); }
inline void promoted_tabRemoved(int  index) { QTabBar::tabRemoved(index); }
inline QSize  promoted_tabSizeHint(int  index) const { return QTabBar::tabSizeHint(index); }
inline void promoted_wheelEvent(QWheelEvent*  event) { QTabBar::wheelEvent(event); }
};

class PythonQtWrapper_QTabBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ButtonPosition SelectionBehavior )
enum ButtonPosition{
  LeftSide = QTabBar::LeftSide,   RightSide = QTabBar::RightSide};
enum SelectionBehavior{
  SelectLeftTab = QTabBar::SelectLeftTab,   SelectRightTab = QTabBar::SelectRightTab,   SelectPreviousTab = QTabBar::SelectPreviousTab};
public slots:
QTabBar* new_QTabBar(QWidget*  parent = 0);
void delete_QTabBar(QTabBar* obj) { delete obj; } 
   int  addTab(QTabBar* theWrappedObject, const QIcon&  icon, const QString&  text);
   int  addTab(QTabBar* theWrappedObject, const QString&  text);
   void changeEvent(QTabBar* theWrappedObject, QEvent*  arg__1);
   int  count(QTabBar* theWrappedObject) const;
   int  currentIndex(QTabBar* theWrappedObject) const;
   bool  documentMode(QTabBar* theWrappedObject) const;
   bool  drawBase(QTabBar* theWrappedObject) const;
   Qt::TextElideMode  elideMode(QTabBar* theWrappedObject) const;
   bool  event(QTabBar* theWrappedObject, QEvent*  arg__1);
   bool  expanding(QTabBar* theWrappedObject) const;
   void hideEvent(QTabBar* theWrappedObject, QHideEvent*  arg__1);
   QSize  iconSize(QTabBar* theWrappedObject) const;
   void initStyleOption(QTabBar* theWrappedObject, QStyleOptionTab*  option, int  tabIndex) const;
   int  insertTab(QTabBar* theWrappedObject, int  index, const QIcon&  icon, const QString&  text);
   int  insertTab(QTabBar* theWrappedObject, int  index, const QString&  text);
   bool  isMovable(QTabBar* theWrappedObject) const;
   bool  isTabEnabled(QTabBar* theWrappedObject, int  index) const;
   void keyPressEvent(QTabBar* theWrappedObject, QKeyEvent*  arg__1);
   QSize  minimumSizeHint(QTabBar* theWrappedObject) const;
   QSize  minimumTabSizeHint(QTabBar* theWrappedObject, int  index) const;
   void mouseMoveEvent(QTabBar* theWrappedObject, QMouseEvent*  arg__1);
   void mousePressEvent(QTabBar* theWrappedObject, QMouseEvent*  arg__1);
   void mouseReleaseEvent(QTabBar* theWrappedObject, QMouseEvent*  arg__1);
   void moveTab(QTabBar* theWrappedObject, int  from, int  to);
   void paintEvent(QTabBar* theWrappedObject, QPaintEvent*  arg__1);
   void removeTab(QTabBar* theWrappedObject, int  index);
   void resizeEvent(QTabBar* theWrappedObject, QResizeEvent*  arg__1);
   QTabBar::SelectionBehavior  selectionBehaviorOnRemove(QTabBar* theWrappedObject) const;
   void setDocumentMode(QTabBar* theWrappedObject, bool  set);
   void setDrawBase(QTabBar* theWrappedObject, bool  drawTheBase);
   void setElideMode(QTabBar* theWrappedObject, Qt::TextElideMode  arg__1);
   void setExpanding(QTabBar* theWrappedObject, bool  enabled);
   void setIconSize(QTabBar* theWrappedObject, const QSize&  size);
   void setMovable(QTabBar* theWrappedObject, bool  movable);
   void setSelectionBehaviorOnRemove(QTabBar* theWrappedObject, QTabBar::SelectionBehavior  behavior);
   void setShape(QTabBar* theWrappedObject, QTabBar::Shape  shape);
   void setTabButton(QTabBar* theWrappedObject, int  index, QTabBar::ButtonPosition  position, QWidget*  widget);
   void setTabData(QTabBar* theWrappedObject, int  index, const QVariant&  data);
   void setTabEnabled(QTabBar* theWrappedObject, int  index, bool  arg__2);
   void setTabIcon(QTabBar* theWrappedObject, int  index, const QIcon&  icon);
   void setTabText(QTabBar* theWrappedObject, int  index, const QString&  text);
   void setTabTextColor(QTabBar* theWrappedObject, int  index, const QColor&  color);
   void setTabToolTip(QTabBar* theWrappedObject, int  index, const QString&  tip);
   void setTabWhatsThis(QTabBar* theWrappedObject, int  index, const QString&  text);
   void setTabsClosable(QTabBar* theWrappedObject, bool  closable);
   void setUsesScrollButtons(QTabBar* theWrappedObject, bool  useButtons);
   QTabBar::Shape  shape(QTabBar* theWrappedObject) const;
   void showEvent(QTabBar* theWrappedObject, QShowEvent*  arg__1);
   QSize  sizeHint(QTabBar* theWrappedObject) const;
   int  tabAt(QTabBar* theWrappedObject, const QPoint&  pos) const;
   QWidget*  tabButton(QTabBar* theWrappedObject, int  index, QTabBar::ButtonPosition  position) const;
   QVariant  tabData(QTabBar* theWrappedObject, int  index) const;
   QIcon  tabIcon(QTabBar* theWrappedObject, int  index) const;
   void tabInserted(QTabBar* theWrappedObject, int  index);
   void tabLayoutChange(QTabBar* theWrappedObject);
   QRect  tabRect(QTabBar* theWrappedObject, int  index) const;
   void tabRemoved(QTabBar* theWrappedObject, int  index);
   QSize  tabSizeHint(QTabBar* theWrappedObject, int  index) const;
   QString  tabText(QTabBar* theWrappedObject, int  index) const;
   QColor  tabTextColor(QTabBar* theWrappedObject, int  index) const;
   QString  tabToolTip(QTabBar* theWrappedObject, int  index) const;
   QString  tabWhatsThis(QTabBar* theWrappedObject, int  index) const;
   bool  tabsClosable(QTabBar* theWrappedObject) const;
   bool  usesScrollButtons(QTabBar* theWrappedObject) const;
   void wheelEvent(QTabBar* theWrappedObject, QWheelEvent*  event);
};





class PythonQtShell_QTabWidget : public QTabWidget
{
public:
    PythonQtShell_QTabWidget(QWidget*  parent = 0):QTabWidget(parent),_wrapper(NULL) {};

   ~PythonQtShell_QTabWidget();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  width) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual void tabInserted(int  index);
virtual void tabRemoved(int  index);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTabWidget : public QTabWidget
{ public:
inline void promoted_changeEvent(QEvent*  arg__1) { QTabWidget::changeEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QTabWidget::event(arg__1); }
inline bool  promoted_hasHeightForWidth() const { return QTabWidget::hasHeightForWidth(); }
inline int  promoted_heightForWidth(int  width) const { return QTabWidget::heightForWidth(width); }
inline void promoted_initStyleOption(QStyleOptionTabWidgetFrame*  option) const { QTabWidget::initStyleOption(option); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QTabWidget::keyPressEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QTabWidget::paintEvent(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QTabWidget::resizeEvent(arg__1); }
inline void promoted_setTabBar(QTabBar*  arg__1) { QTabWidget::setTabBar(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QTabWidget::showEvent(arg__1); }
inline void promoted_tabInserted(int  index) { QTabWidget::tabInserted(index); }
inline void promoted_tabRemoved(int  index) { QTabWidget::tabRemoved(index); }
};

class PythonQtWrapper_QTabWidget : public QObject
{ Q_OBJECT
public:
public slots:
QTabWidget* new_QTabWidget(QWidget*  parent = 0);
void delete_QTabWidget(QTabWidget* obj) { delete obj; } 
   int  addTab(QTabWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QIcon&  icon, const QString&  label);
   int  addTab(QTabWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QString&  arg__2);
   void changeEvent(QTabWidget* theWrappedObject, QEvent*  arg__1);
   void clear(QTabWidget* theWrappedObject);
   QWidget*  cornerWidget(QTabWidget* theWrappedObject, Qt::Corner  corner = Qt::TopRightCorner) const;
   int  count(QTabWidget* theWrappedObject) const;
   int  currentIndex(QTabWidget* theWrappedObject) const;
   QWidget*  currentWidget(QTabWidget* theWrappedObject) const;
   bool  documentMode(QTabWidget* theWrappedObject) const;
   Qt::TextElideMode  elideMode(QTabWidget* theWrappedObject) const;
   bool  event(QTabWidget* theWrappedObject, QEvent*  arg__1);
   bool  hasHeightForWidth(QTabWidget* theWrappedObject) const;
   int  heightForWidth(QTabWidget* theWrappedObject, int  width) const;
   QSize  iconSize(QTabWidget* theWrappedObject) const;
   int  indexOf(QTabWidget* theWrappedObject, QWidget*  widget) const;
   void initStyleOption(QTabWidget* theWrappedObject, QStyleOptionTabWidgetFrame*  option) const;
   int  insertTab(QTabWidget* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QIcon&  icon, const QString&  label);
   int  insertTab(QTabWidget* theWrappedObject, int  index, PythonQtPassOwnershipToCPP<QWidget* >  widget, const QString&  arg__3);
   bool  isMovable(QTabWidget* theWrappedObject) const;
   bool  isTabEnabled(QTabWidget* theWrappedObject, int  index) const;
   void keyPressEvent(QTabWidget* theWrappedObject, QKeyEvent*  arg__1);
   QSize  minimumSizeHint(QTabWidget* theWrappedObject) const;
   void paintEvent(QTabWidget* theWrappedObject, QPaintEvent*  arg__1);
   void removeTab(QTabWidget* theWrappedObject, int  index);
   void resizeEvent(QTabWidget* theWrappedObject, QResizeEvent*  arg__1);
   void setCornerWidget(QTabWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QWidget* >  w, Qt::Corner  corner = Qt::TopRightCorner);
   void setDocumentMode(QTabWidget* theWrappedObject, bool  set);
   void setElideMode(QTabWidget* theWrappedObject, Qt::TextElideMode  arg__1);
   void setIconSize(QTabWidget* theWrappedObject, const QSize&  size);
   void setMovable(QTabWidget* theWrappedObject, bool  movable);
   void setTabBar(QTabWidget* theWrappedObject, PythonQtPassOwnershipToCPP<QTabBar* >  arg__1);
   void setTabEnabled(QTabWidget* theWrappedObject, int  index, bool  arg__2);
   void setTabIcon(QTabWidget* theWrappedObject, int  index, const QIcon&  icon);
   void setTabPosition(QTabWidget* theWrappedObject, QTabWidget::TabPosition  arg__1);
   void setTabShape(QTabWidget* theWrappedObject, QTabWidget::TabShape  s);
   void setTabText(QTabWidget* theWrappedObject, int  index, const QString&  arg__2);
   void setTabToolTip(QTabWidget* theWrappedObject, int  index, const QString&  tip);
   void setTabWhatsThis(QTabWidget* theWrappedObject, int  index, const QString&  text);
   void setTabsClosable(QTabWidget* theWrappedObject, bool  closeable);
   void setUsesScrollButtons(QTabWidget* theWrappedObject, bool  useButtons);
   void showEvent(QTabWidget* theWrappedObject, QShowEvent*  arg__1);
   QSize  sizeHint(QTabWidget* theWrappedObject) const;
   QTabBar*  tabBar(QTabWidget* theWrappedObject) const;
   QIcon  tabIcon(QTabWidget* theWrappedObject, int  index) const;
   void tabInserted(QTabWidget* theWrappedObject, int  index);
   QTabWidget::TabPosition  tabPosition(QTabWidget* theWrappedObject) const;
   void tabRemoved(QTabWidget* theWrappedObject, int  index);
   QTabWidget::TabShape  tabShape(QTabWidget* theWrappedObject) const;
   QString  tabText(QTabWidget* theWrappedObject, int  index) const;
   QString  tabToolTip(QTabWidget* theWrappedObject, int  index) const;
   QString  tabWhatsThis(QTabWidget* theWrappedObject, int  index) const;
   bool  tabsClosable(QTabWidget* theWrappedObject) const;
   bool  usesScrollButtons(QTabWidget* theWrappedObject) const;
   QWidget*  widget(QTabWidget* theWrappedObject, int  index) const;
};





class PythonQtShell_QTableView : public QTableView
{
public:
    PythonQtShell_QTableView(QWidget*  parent = 0):QTableView(parent),_wrapper(NULL) {};

   ~PythonQtShell_QTableView();

virtual void actionEvent(QActionEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void commitData(QWidget*  editor);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void customEvent(QEvent*  arg__1);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight, const QVector<int >&  roles = QVector<int>());
virtual int  devType() const;
virtual void doItemsLayout();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void editorDestroyed(QObject*  editor);
virtual void enterEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  arg__1);
virtual int  horizontalOffset() const;
virtual void horizontalScrollbarAction(int  action);
virtual void horizontalScrollbarValueChanged(int  value);
virtual QModelIndex  indexAt(const QPoint&  p) const;
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void keyboardSearch(const QString&  search);
virtual void leaveEvent(QEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, long*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  e);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void reset();
virtual void resizeEvent(QResizeEvent*  event);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual void scrollContentsBy(int  dx, int  dy);
virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
virtual void selectAll();
virtual QList<QModelIndex >  selectedIndexes() const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event = 0) const;
virtual void setModel(QAbstractItemModel*  model);
virtual void setRootIndex(const QModelIndex&  index);
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void setupViewport(QWidget*  viewport);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  arg__1);
virtual int  sizeHintForColumn(int  column) const;
virtual int  sizeHintForRow(int  row) const;
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  event);
virtual void updateEditorData();
virtual void updateEditorGeometries();
virtual void updateGeometries();
virtual int  verticalOffset() const;
virtual void verticalScrollbarAction(int  action);
virtual void verticalScrollbarValueChanged(int  value);
virtual QStyleOptionViewItem  viewOptions() const;
virtual bool  viewportEvent(QEvent*  event);
virtual QSize  viewportSizeHint() const;
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void wheelEvent(QWheelEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QTableView : public QTableView
{ public:
inline void promoted_columnCountChanged(int  oldCount, int  newCount) { QTableView::columnCountChanged(oldCount, newCount); }
inline void promoted_columnMoved(int  column, int  oldIndex, int  newIndex) { QTableView::columnMoved(column, oldIndex, newIndex); }
inline void promoted_columnResized(int  column, int  oldWidth, int  newWidth) { QTableView::columnResized(column, oldWidth, newWidth); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QTableView::currentChanged(current, previous); }
inline void promoted_doItemsLayout() { QTableView::doItemsLayout(); }
inline int  promoted_horizontalOffset() const { return QTableView::horizontalOffset(); }
inline void promoted_horizontalScrollbarAction(int  action) { QTableView::horizontalScrollbarAction(action); }
inline QModelIndex  promoted_indexAt(const QPoint&  p) const { return QTableView::indexAt(p); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return QTableView::isIndexHidden(index); }
inline QModelIndex  promoted_moveCursor(int  cursorAction, Qt::KeyboardModifiers  modifiers) { return QTableView::moveCursor((QAbstractItemView::CursorAction)cursorAction, modifiers); }
inline void promoted_paintEvent(QPaintEvent*  e) { QTableView::paintEvent(e); }
inline void promoted_rowCountChanged(int  oldCount, int  newCount) { QTableView::rowCountChanged(oldCount, newCount); }
inline void promoted_rowMoved(int  row, int  oldIndex, int  newIndex) { QTableView::rowMoved(row, oldIndex, newIndex); }
inline void promoted_rowResized(int  row, int  oldHeight, int  newHeight) { QTableView::rowResized(row, oldHeight, newHeight); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QTableView::scrollContentsBy(dx, dy); }
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QTableView::scrollTo(index, hint); }
inline QList<QModelIndex >  promoted_selectedIndexes() const { return QTableView::selectedIndexes(); }
inline void promoted_selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected) { QTableView::selectionChanged(selected, deselected); }
inline void promoted_setModel(QAbstractItemModel*  model) { QTableView::setModel(model); }
inline void promoted_setRootIndex(const QModelIndex&  index) { QTableView::setRootIndex(index); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QTableView::setSelection(rect, command); }
inline void promoted_setSelectionModel(QItemSelectionModel*  selectionModel) { QTableView::setSelectionModel(selectionModel); }
inline int  promoted_sizeHintForColumn(int  column) const { return QTableView::sizeHintForColumn(column); }
inline int  promoted_sizeHintForRow(int  row) const { return QTableView::sizeHintForRow(row); }
inline void promoted_timerEvent(QTimerEvent*  event) { QTableView::timerEvent(event); }
inline void promoted_updateGeometries() { QTableView::updateGeometries(); }
inline int  promoted_verticalOffset() const { return QTableView::verticalOffset(); }
inline void promoted_verticalScrollbarAction(int  action) { QTableView::verticalScrollbarAction(action); }
inline QStyleOptionViewItem  promoted_viewOptions() const { return QTableView::viewOptions(); }
inline QSize  promoted_viewportSizeHint() const { return QTableView::viewportSizeHint(); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return QTableView::visualRect(index); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return QTableView::visualRegionForSelection(selection); }
};

class PythonQtWrapper_QTableView : public QObject
{ Q_OBJECT
public:
public slots:
QTableView* new_QTableView(QWidget*  parent = 0);
void delete_QTableView(QTableView* obj) { delete obj; } 
   void clearSpans(QTableView* theWrappedObject);
   int  columnAt(QTableView* theWrappedObject, int  x) const;
   int  columnSpan(QTableView* theWrappedObject, int  row, int  column) const;
   int  columnViewportPosition(QTableView* theWrappedObject, int  column) const;
   int  columnWidth(QTableView* theWrappedObject, int  column) const;
   void currentChanged(QTableView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous);
   void doItemsLayout(QTableView* theWrappedObject);
   Qt::PenStyle  gridStyle(QTableView* theWrappedObject) const;
   QHeaderView*  horizontalHeader(QTableView* theWrappedObject) const;
   int  horizontalOffset(QTableView* theWrappedObject) const;
   void horizontalScrollbarAction(QTableView* theWrappedObject, int  action);
   QModelIndex  indexAt(QTableView* theWrappedObject, const QPoint&  p) const;
   bool  isColumnHidden(QTableView* theWrappedObject, int  column) const;
   bool  isCornerButtonEnabled(QTableView* theWrappedObject) const;
   bool  isIndexHidden(QTableView* theWrappedObject, const QModelIndex&  index) const;
   bool  isRowHidden(QTableView* theWrappedObject, int  row) const;
   bool  isSortingEnabled(QTableView* theWrappedObject) const;
   QModelIndex  moveCursor(QTableView* theWrappedObject, int  cursorAction, Qt::KeyboardModifiers  modifiers);
   void paintEvent(QTableView* theWrappedObject, QPaintEvent*  e);
   int  rowAt(QTableView* theWrappedObject, int  y) const;
   int  rowHeight(QTableView* theWrappedObject, int  row) const;
   int  rowSpan(QTableView* theWrappedObject, int  row, int  column) const;
   int  rowViewportPosition(QTableView* theWrappedObject, int  row) const;
   void scrollContentsBy(QTableView* theWrappedObject, int  dx, int  dy);
   void scrollTo(QTableView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
   QList<QModelIndex >  selectedIndexes(QTableView* theWrappedObject) const;
   void selectionChanged(QTableView* theWrappedObject, const QItemSelection&  selected, const QItemSelection&  deselected);
   void setColumnHidden(QTableView* theWrappedObject, int  column, bool  hide);
   void setColumnWidth(QTableView* theWrappedObject, int  column, int  width);
   void setCornerButtonEnabled(QTableView* theWrappedObject, bool  enable);
   void setGridStyle(QTableView* theWrappedObject, Qt::PenStyle  style);
   void setHorizontalHeader(QTableView* theWrappedObject, QHeaderView*  header);
   void setModel(QTableView* theWrappedObject, QAbstractItemModel*  model);
   void setRootIndex(QTableView* theWrappedObject, const QModelIndex&  index);
   void setRowHeight(QTableView* theWrappedObject, int  row, int  height);
   void setRowHidden(QTableView* theWrappedObject, int  row, bool  hide);
   void setSelection(QTableView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
   void setSelectionModel(QTableView* theWrappedObject, QItemSelectionModel*  selectionModel);
   void setSortingEnabled(QTableView* theWrappedObject, bool  enable);
   void setSpan(QTableView* theWrappedObject, int  row, int  column, int  rowSpan, int  columnSpan);
   void setVerticalHeader(QTableView* theWrappedObject, QHeaderView*  header);
   void setWordWrap(QTableView* theWrappedObject, bool  on);
   bool  showGrid(QTableView* theWrappedObject) const;
   int  sizeHintForColumn(QTableView* theWrappedObject, int  column) const;
   int  sizeHintForRow(QTableView* theWrappedObject, int  row) const;
   void sortByColumn(QTableView* theWrappedObject, int  column, Qt::SortOrder  order);
   void timerEvent(QTableView* theWrappedObject, QTimerEvent*  event);
   void updateGeometries(QTableView* theWrappedObject);
   QHeaderView*  verticalHeader(QTableView* theWrappedObject) const;
   int  verticalOffset(QTableView* theWrappedObject) const;
   void verticalScrollbarAction(QTableView* theWrappedObject, int  action);
   QStyleOptionViewItem  viewOptions(QTableView* theWrappedObject) const;
   QSize  viewportSizeHint(QTableView* theWrappedObject) const;
   QRect  visualRect(QTableView* theWrappedObject, const QModelIndex&  index) const;
   QRegion  visualRegionForSelection(QTableView* theWrappedObject, const QItemSelection&  selection) const;
   bool  wordWrap(QTableView* theWrappedObject) const;
};


