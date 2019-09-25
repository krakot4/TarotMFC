
// testMFCDoc.cpp : impl�mentation de la classe CtestMFCDoc
//

#include "stdafx.h"
// SHARED_HANDLERS peuvent �tre d�finis dans les gestionnaires d'aper�u, de miniature
// et de recherche d'impl�mentation de projet ATL et permettent la partage de code de document avec ce projet.
#ifndef SHARED_HANDLERS
#include "testMFC.h"
#endif

#include "testMFCDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CtestMFCDoc

IMPLEMENT_DYNCREATE(CtestMFCDoc, CDocument)

BEGIN_MESSAGE_MAP(CtestMFCDoc, CDocument)
END_MESSAGE_MAP()


// construction ou destruction de CtestMFCDoc

CtestMFCDoc::CtestMFCDoc()
{
	// TODO: ajoutez ici le code d'une construction unique

}

CtestMFCDoc::~CtestMFCDoc()
{
}

BOOL CtestMFCDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: ajoutez ici le code de r�initialisation
	// (les documents SDI r�utiliseront ce document)

	return TRUE;
}




// s�rialisation de CtestMFCDoc

void CtestMFCDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: ajoutez ici le code de stockage
	}
	else
	{
		// TODO: ajoutez ici le code de chargement
	}
}

#ifdef SHARED_HANDLERS

// Prise en charge des miniatures
void CtestMFCDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// Modifier ce code pour dessiner les donn�es du document
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// Support pour les gestionnaires de recherche
void CtestMFCDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// D�finir le contenu de recherche � partir des donn�es du document. 
	// Les parties du contenu doivent �tre s�par�es par ";"

	// Par exemple�:  strSearchContent = _T("point;rectangle;circle;ole object;");
	SetSearchContent(strSearchContent);
}

void CtestMFCDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// diagnostics pour CtestMFCDoc

#ifdef _DEBUG
void CtestMFCDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CtestMFCDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// commandes pour CtestMFCDoc
