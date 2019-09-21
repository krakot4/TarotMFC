#pragma once
#include "stdafx.h"
#include "CDonne.h"


// boîte de dialogue de CPoints

class CPoints : public CDialogEx
{
	DECLARE_DYNAMIC(CPoints)

public:
	CPoints(CWnd* pParent = nullptr);   // constructeur standard
	virtual ~CPoints();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAROTMFC_POINTS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	int bouts_preneur;
	int pts_a_faire;
	afx_msg void BoutEntre();
	int pts_preneur;
	int pts_donne;
	afx_msg void PointsChange();
	afx_msg void OnBnClickedOk();
};
