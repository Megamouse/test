#pragma once

#include <QDialog>

class Header : public QDialog
{
	Q_OBJECT

public:
	Header(QWidget* parent = Q_NULLPTR) : QDialog(parent)
	{}

private:
	int mVar;
};
#pragma once
