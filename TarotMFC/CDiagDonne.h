#pragma once
#include "CDonne.h"
#include "CNom.h"


// Boîte de dialogue CDonne

class CDiagDonne : public CDialogEx
{
	DECLARE_DYNAMIC(CDiagDonne)
public:
	CDiagDonne(CWnd* pParent = NULL);   // constructeur standard
	virtual ~CDiagDonne();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAROTMFC_DONNE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void JPriseChange();
	afx_msg void PriseChange();
	afx_msg void OnBnClickedOk();
	int int_jprise;
	int int_prise;
	contrat typ_ctr;
	CPartie* laPartie;
};
