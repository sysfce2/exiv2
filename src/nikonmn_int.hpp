// SPDX-License-Identifier: GPL-2.0-or-later

/*!
  @file    nikonmn_int.hpp
  @brief   Nikon makernote tags.<BR>References:<BR>
  [1] <a href="http://www.tawbaware.com/990exif.htm">MakerNote EXIF Tag of the Nikon 990</a> by Max Lyons<BR>
  [2] <a href="http://park2.wakwak.com/%7Etsuruzoh/Computer/Digicams/exif-e.html">Exif file format</a> by TsuruZoh
  Tachibanaya<BR> [3] "EXIFutils Field Reference Guide"<BR> [3] <a
  href="http://www.ozhiker.com/electronics/pjmt/jpeg_info/nikon_mn.html#Nikon_Type_3_Tags">Nikon Type 3 Makernote Tags
  Definition</a> of the PHP JPEG Metadata Toolkit by Evan Hunter<BR> [4] <a
  href="http://www.sno.phy.queensu.ca/~phil/exiftool/">ExifTool</a> by Phil Harvey<BR> [5] Email communication with <a
  href="http://www.rottmerhusen.com">Robert Rottmerhusen</a><BR> [6] Email communication with Roger Larsson<BR> [7] <a
  href="http://www.cybercom.net/~dcoffin/dcraw/">Decoding raw digital photos in Linux</a> by Dave Coffin<br>
 */
#ifndef NIKONMN_INT_HPP_
#define NIKONMN_INT_HPP_

// *****************************************************************************
// included header files
#include <iosfwd>
#include <string>

// *****************************************************************************
// namespace extensions
namespace Exiv2 {
class ExifData;
class Value;
struct TagInfo;

namespace Internal {
// *****************************************************************************
// class definitions

//! A MakerNote format used by Nikon cameras, such as the E990 and D1.
class Nikon1MakerNote {
 public:
  //! Return read-only list of built-in Nikon1 tags
  static const TagInfo* tagList();

  //! @name Print functions for Nikon1 %MakerNote tags
  //@{
  //! Print ISO setting
  static std::ostream& print0x0002(std::ostream& os, const Value& value, const ExifData*);
  //! Print autofocus mode
  static std::ostream& print0x0007(std::ostream& os, const Value& value, const ExifData*);
  //! Print manual focus distance
  static std::ostream& print0x0085(std::ostream& os, const Value& value, const ExifData*);
  //! Print digital zoom setting
  static std::ostream& print0x0086(std::ostream& os, const Value& value, const ExifData*);
  //! Print AF focus position
  static std::ostream& print0x0088(std::ostream& os, const Value& value, const ExifData*);
  //! Print BarometerInfo
  static std::ostream& printBarValue(std::ostream& os, const Value& value, const ExifData*);
  //@}

 private:
  //! Tag information
  static const TagInfo tagInfo_[];

};  // class Nikon1MakerNote

/*!
  @brief A second MakerNote format used by Nikon cameras, including the
         E700, E800, E900, E900S, E910, E950
 */
class Nikon2MakerNote {
 public:
  //! Return read-only list of built-in Nikon2 tags
  static const TagInfo* tagList();

  //! @name Print functions for Nikon2 %MakerNote tags
  //@{
  //! Print digital zoom setting
  static std::ostream& print0x000a(std::ostream& os, const Value& value, const ExifData*);
  //@}

 private:
  //! Tag information
  static const TagInfo tagInfo_[];

};  // class Nikon2MakerNote

//! A third MakerNote format used by Nikon cameras, e.g., E5400, SQ, D2H, D70
class Nikon3MakerNote {
 public:
  //! Return read-only list of built-in Nikon3 tags
  static const TagInfo* tagList();
  //! Return read-only list of built-in Vibration Reduction tags
  static const TagInfo* tagListVr();
  //! Return read-only list of built-in Picture Control tags
  static const TagInfo* tagListPc();
  //! Return read-only list of built-in World time tags
  static const TagInfo* tagListWt();
  //! Return read-only list of built-in ISO info tags
  static const TagInfo* tagListIi();
  //! Return read-only list of built-in Auto Focus tags
  static const TagInfo* tagListAf();
  //! Return read-only list of built-in Auto Focus 2 tags
  static const TagInfo* tagListAf21();
  //! Return read-only list of built-in Auto Focus 2 tags
  static const TagInfo* tagListAf22();
  //! Return read-only list of built-in AF Fine Tune tags
  static const TagInfo* tagListAFT();
  //! Return read-only list of built-in File Info tags
  static const TagInfo* tagListFi();
  //! Return read-only list of built-in Multi Exposure tags
  static const TagInfo* tagListMe();
  //! Return read-only list of built-in Flash Info 1 tags
  static const TagInfo* tagListFl1();
  //! Return read-only list of built-in Flash Info 2 tags
  static const TagInfo* tagListFl2();
  //! Return read-only list of built-in Flash Info 3 tags
  static const TagInfo* tagListFl3();
  //! Return read-only list of built-in Flash Info 6 (0106) tags
  static const TagInfo* tagListFl6();
  //! Return read-only list of built-in Flash Info 7 (0107 and 0108) tags
  static const TagInfo* tagListFl7();
  //! Return read-only list of built-in Shot Info D80 tags
  static const TagInfo* tagListSi1();
  //! Return read-only list of built-in Shot Info D40 tags
  static const TagInfo* tagListSi2();
  //! Return read-only list of built-in Shot Info D300 (a) tags
  static const TagInfo* tagListSi3();
  //! Return read-only list of built-in Shot Info D300 (b) tags
  static const TagInfo* tagListSi4();
  //! Return read-only list of built-in Shot Info tags
  static const TagInfo* tagListSi5();
  //! Return read-only list of built-in Color Balance 1 tags
  static const TagInfo* tagListCb1();
  //! Return read-only list of built-in Color Balance 2 tags
  static const TagInfo* tagListCb2();
  //! Return read-only list of built-in Color Balance 2a tags
  static const TagInfo* tagListCb2a();
  //! Return read-only list of built-in Color Balance 2b tags
  static const TagInfo* tagListCb2b();
  //! Return read-only list of built-in Color Balance 3 tags
  static const TagInfo* tagListCb3();
  //! Return read-only list of built-in Color Balance 4 tags
  static const TagInfo* tagListCb4();
  //! Return read-only list of built-in Lens Data 1 tags
  static const TagInfo* tagListLd1();
  //! Return read-only list of built-in Lens Data 2 tags
  static const TagInfo* tagListLd2();
  //! Return read-only list of built-in Lens Data 3 tags
  static const TagInfo* tagListLd3();
  //! Return read-only list of built-in Lens Data 4 tags
  static const TagInfo* tagListLd4();

  //! @name Print functions for Nikon3 %MakerNote tags
  //@{
  //! Print ISO setting
  static std::ostream& print0x0002(std::ostream& os, const Value& value, const ExifData*);
  //! Print AF2 Area Mode
  static std::ostream& printAf2AreaMode(std::ostream& os, const Value& value, const ExifData* metadata);
  //! Print autofocus mode
  static std::ostream& print0x0007(std::ostream& os, const Value& value, const ExifData*);
  //! Print lens type
  static std::ostream& print0x0083(std::ostream& os, const Value& value, const ExifData*);
  //! Print lens information
  static std::ostream& print0x0084(std::ostream& os, const Value& value, const ExifData*);
  //! Print manual focus distance
  static std::ostream& print0x0085(std::ostream& os, const Value& value, const ExifData*);
  //! Print digital zoom setting
  static std::ostream& print0x0086(std::ostream& os, const Value& value, const ExifData*);
  //! Print AF point
  static std::ostream& print0x0088(std::ostream& os, const Value& value, const ExifData*);
  //! Print shooting mode
  static std::ostream& print0x0089(std::ostream& os, const Value& value, const ExifData* metadata);
  //! Print number of lens stops
  static std::ostream& print0x008b(std::ostream& os, const Value& value, const ExifData*);
  //! Print AF Points In Focus
  static std::ostream& printAfPointsInFocus(std::ostream& os, const Value& value, const ExifData* metadata);
  //! Print lens name
  static std::ostream& printLensId(std::ostream& os, const Value& value, const ExifData* metadata,
                                   const std::string& group);
  static std::ostream& printLensId1(std::ostream& os, const Value& value, const ExifData* metadata);
  static std::ostream& printLensId2(std::ostream& os, const Value& value, const ExifData* metadata);
  static std::ostream& printLensId3(std::ostream& os, const Value& value, const ExifData* metadata);
  static std::ostream& printLensId4(std::ostream& os, const Value& value, const ExifData* metadata);
  //! Print focus distance
  static std::ostream& printFocusDistance(std::ostream& os, const Value& value, const ExifData*);
  //! Print focus distance for new LensData as used for e.g. Nikon Z 6/7
  static std::ostream& printFocusDistanceLd4(std::ostream& os, const Value& value, const ExifData*);
  //! Print lens aperture value
  static std::ostream& printAperture(std::ostream& os, const Value& value, const ExifData*);
  //! Print lens aperture value for new LensData as used for e.g. Nikon Z 6/7
  static std::ostream& printApertureLd4(std::ostream& os, const Value& value, const ExifData*);
  //! Print lens focal length
  static std::ostream& printFocal(std::ostream& os, const Value& value, const ExifData*);
  //! Print Focal length value for new LensData as used for e.g. Nikon Z 6/7
  static std::ostream& printFocalLd4(std::ostream& os, const Value& value, const ExifData*);
  //! Print lens f-stops
  static std::ostream& printFStops(std::ostream& os, const Value& value, const ExifData*);
  //! Print exit pupil position
  static std::ostream& printExitPupilPosition(std::ostream& os, const Value& value, const ExifData*);
  //! Print sensor pixel size
  static std::ostream& print0x009a(std::ostream& os, const Value& value, const ExifData*);
  //! Print retouch history
  static std::ostream& print0x009e(std::ostream& os, const Value& value, const ExifData*);
  //! Print Exif.NikonIi.ISO(2)
  static std::ostream& printIiIso(std::ostream& os, const Value& value, const ExifData*);
  //! Print flash focal length
  static std::ostream& printFlashFocalLength(std::ostream& os, const Value& value, const ExifData*);
  //! Print repeating flash rate
  static std::ostream& printRepeatingFlashRate(std::ostream& os, const Value& value, const ExifData*);
  //! Print repeating flash count
  static std::ostream& printRepeatingFlashCount(std::ostream& os, const Value& value, const ExifData*);
  //! Print external flash data 1 value when using NikonFl6
  static std::ostream& printExternalFlashData1Fl6(std::ostream& os, const Value& value, const ExifData*);
  //! Print external flash data 1 value when using NikonFl7
  static std::ostream& printExternalFlashData1Fl7(std::ostream& os, const Value& value, const ExifData*);
  //! Print external flash data 1 value when using NikonFl6
  static std::ostream& printExternalFlashData2Fl6(std::ostream& os, const Value& value, const ExifData*);
  //! Print external flash data 2 value
  static std::ostream& printExternalFlashData2(std::ostream& os, const Value& value, const ExifData*);
  //! Print flash compensation value for the Master when using NikonFl6
  static std::ostream& printFlashMasterDataFl6(std::ostream& os, const Value& value, const ExifData*);
  //! Print flash compensation value for the Master when using NikonFl7
  static std::ostream& printFlashMasterDataFl7(std::ostream& os, const Value& value, const ExifData*);
  //! Print flash group A control data value
  static std::ostream& printFlashGroupAControlData(std::ostream& os, const Value& value, const ExifData* data);
  //! Print flash group B/C control data value
  static std::ostream& printFlashGroupBCControlData(std::ostream& os, const Value& value, const ExifData* data);
  //! Print flash compensation value for group A when using NikonFl6
  static std::ostream& printFlashGroupADataFl6(std::ostream& os, const Value& value, const ExifData*);
  //! Print flash compensation value for group A when using NikonFl7
  static std::ostream& printFlashGroupADataFl7(std::ostream& os, const Value& value, const ExifData*);
  //! Print flash compensation value for group B when using NikonFl6
  static std::ostream& printFlashGroupBDataFl6(std::ostream& os, const Value& value, const ExifData*);
  //! Print flash compensation value for group B when using NikonFl7
  static std::ostream& printFlashGroupBDataFl7(std::ostream& os, const Value& value, const ExifData*);
  //! Print flash compensation value for group C when using NikonFl6
  static std::ostream& printFlashGroupCDataFl6(std::ostream& os, const Value& value, const ExifData*);
  //! Print flash compensation value for group C when using NikonFl7
  static std::ostream& printFlashGroupCDataFl7(std::ostream& os, const Value& value, const ExifData*);
  //! Print external flash data 3 value
  static std::ostream& printExternalFlashData3(std::ostream& os, const Value& value, const ExifData*);
  //! Print flash camera exposure compensation values
  static std::ostream& printCameraExposureCompensation(std::ostream& os, const Value& value, const ExifData*);
  //! Print external flash data 4 value
  static std::ostream& printExternalFlashData4(std::ostream& os, const Value& value, const ExifData*);
  //! Print flash head zoom value
  static std::ostream& printFlashZoomHeadPosition(std::ostream& os, const Value& value, const ExifData*);
  //! Print time zone
  static std::ostream& printTimeZone(std::ostream& os, const Value& value, const ExifData*);
  //! Print picture control value
  static std::ostream& printPictureControl(std::ostream& os, const Value& value, const ExifData*);
  //@}

 private:
  //! Tag information
  static const TagInfo tagInfo_[];
  //! Vibration Reduction tag information
  static const TagInfo tagInfoVr_[];
  //! Picture Control tag information
  static const TagInfo tagInfoPc_[];
  //! World Time tag information
  static const TagInfo tagInfoWt_[];
  //! ISO info tag information
  static const TagInfo tagInfoIi_[];
  //! Auto Focus tag information
  static const TagInfo tagInfoAf_[];
  //! Auto Focus tag 2 information
  static const TagInfo tagInfoAf21_[];
  //! Auto Focus tag 2 information
  static const TagInfo tagInfoAf22_[];
  //! AF Fine Tune tag information
  static const TagInfo tagInfoAFT_[];
  //! File Info tag information
  static const TagInfo tagInfoFi_[];
  //! Multi Exposure tag information
  static const TagInfo tagInfoMe_[];
  //! Flash Info 1 tag information
  static const TagInfo tagInfoFl1_[];
  //! Flash Info 2 tag information
  static const TagInfo tagInfoFl2_[];
  //! Flash Info 3 tag information
  static const TagInfo tagInfoFl3_[];
  //! Flash Info 6 (0106) tag information
  static const TagInfo tagInfoFl6_[];
  //! Flash Info 7 (0107 and 0108) tag information
  static const TagInfo tagInfoFl7_[];
  //! Shot Info D80 tag information
  static const TagInfo tagInfoSi1_[];
  //! Shot Info D40 tag information
  static const TagInfo tagInfoSi2_[];
  //! Shot Info D300 (a) tag information
  static const TagInfo tagInfoSi3_[];
  //! Shot Info D300 (b) tag information
  static const TagInfo tagInfoSi4_[];
  //! Shot Info tag information
  static const TagInfo tagInfoSi5_[];
  //! Color Balance 1 tag information
  static const TagInfo tagInfoCb1_[];
  //! Color Balance 2 tag information
  static const TagInfo tagInfoCb2_[];
  //! Color Balance 2a tag information
  static const TagInfo tagInfoCb2a_[];
  //! Color Balance 2b tag information
  static const TagInfo tagInfoCb2b_[];
  //! Color Balance 3 tag information
  static const TagInfo tagInfoCb3_[];
  //! Color Balance 4 tag information
  static const TagInfo tagInfoCb4_[];
  //! Lens Data 1 tag information
  static const TagInfo tagInfoLd1_[];
  //! Lens Data 2 tag information
  static const TagInfo tagInfoLd2_[];
  //! Lens Data 3 tag information
  static const TagInfo tagInfoLd3_[];
  //! Lens Data 4 tag information
  static const TagInfo tagInfoLd4_[];

};  // class Nikon3MakerNote

}  // namespace Internal
}  // namespace Exiv2

#endif  // #ifndef NIKONMN_INT_HPP_
