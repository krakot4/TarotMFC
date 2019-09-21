#pragma once
#include "CDonne.h"


// Boîte de dialogue CAnnonce

class CAnnonce : public CDialogEx
{
	DECLARE_DYNAMIC(CAnnonce)

public:
	CAnnonce(CWnd* pParent = NULL);   // constructeur standard
	virtual ~CAnnonce();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAROTMFC_ANNONCE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void PoigneeChange();
	afx_msg void CampChange();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	int int_pgn;
	int int_cmp;
	poignee pgn;
	camp cmp_bout;
};
