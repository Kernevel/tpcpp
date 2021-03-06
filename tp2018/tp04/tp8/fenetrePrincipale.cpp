#include "fenetrePrincipale.hpp"
FenetrePrincipale::FenetrePrincipale() : QMainWindow() {
  this->setWindowTitle("TP8");
  // this->setMinimumWidth(1000);
  // le widget dans lequel tout s'affiche
  widget_general = new QWidget;
  widget_general->resize (800, 600);
  QHBoxLayout * qbl_general = new QHBoxLayout;
  widget_general->setLayout(qbl_general);
  this->setCentralWidget(widget_general);
  //exemple de creation d'une zone ou mettre boutons...
  // qbl_general->addWidget(BuildGroupBoxControle());
  // exemple de création d'un menu
  // menuFichier = menuBar()->addMenu(tr("&Fichier"));

  myscene = new MyScene(this);
  myview = new QGraphicsView(myscene, this);

  // myview->setFixedSize(800, 600);
  myview->setSceneRect(0, 0, 800, 600);
  // myview->fitInView(widget_general);

  qbl_general->addWidget(myview);
  this->adjustSize();



}
FenetrePrincipale::~FenetrePrincipale() {
}
// QGroupBox * FenetrePrincipale::BuildGroupBoxControle() {
//   QGroupBox * qgb = new QGroupBox();
//   return qgb;
// }
