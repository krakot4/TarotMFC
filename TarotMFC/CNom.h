#pragma once
#include "CPartie.h"
#include "CJoueur.h"

// Bo�te de dialogue CNom

class CNom : public CDialogEx
{
	DECLARE_DYNAMIC(CNom)

public:
	CNom(CPartie *partie,CWnd* pParent = NULL);   // constructeur standard
	virtual ~CNom();

	// Donn�es de bo�te de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAROTMFC_NOM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV
	CPartie* laPartie;
	CJoueur* lesJoueurs[4];

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	CString mJoueur1;
	CString mJoueur2;
	CString mJoueur3;
	CString mJoueur4;
};
