#pragma once
#include "CPartie.h"


// Boîte de dialogue CDiagNewDonne

class CDiagNewDonne : public CDialogEx
{
	DECLARE_DYNAMIC(CDiagNewDonne)
private:

public:
	CDiagNewDonne(CPartie *LaPartie,CJoueur*lesJoueurs[], CWnd* pParent = NULL);   // constructeur standard
	virtual ~CDiagNewDonne();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAROTMFC_NEWDONNE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV
	CPartie* laPartie;
	CJoueur* lesJoueurs[4];

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
