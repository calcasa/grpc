/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/metadata/v3/metadata.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/type/metadata/v3/metadata.upbdefs.h"

extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init udpa_annotations_versioning_proto_upbdefinit;
extern upb_def_init validate_validate_proto_upbdefinit;
extern const upb_msglayout envoy_type_metadata_v3_MetadataKey_msginit;
extern const upb_msglayout envoy_type_metadata_v3_MetadataKey_PathSegment_msginit;
extern const upb_msglayout envoy_type_metadata_v3_MetadataKind_msginit;
extern const upb_msglayout envoy_type_metadata_v3_MetadataKind_Request_msginit;
extern const upb_msglayout envoy_type_metadata_v3_MetadataKind_Route_msginit;
extern const upb_msglayout envoy_type_metadata_v3_MetadataKind_Cluster_msginit;
extern const upb_msglayout envoy_type_metadata_v3_MetadataKind_Host_msginit;

static const upb_msglayout *layouts[7] = {
  &envoy_type_metadata_v3_MetadataKey_msginit,
  &envoy_type_metadata_v3_MetadataKey_PathSegment_msginit,
  &envoy_type_metadata_v3_MetadataKind_msginit,
  &envoy_type_metadata_v3_MetadataKind_Request_msginit,
  &envoy_type_metadata_v3_MetadataKind_Route_msginit,
  &envoy_type_metadata_v3_MetadataKind_Cluster_msginit,
  &envoy_type_metadata_v3_MetadataKind_Host_msginit,
};

static const char descriptor[1104] = {'\n', '%', 'e', 'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'm', 'e', 't', 'a', 'd', 'a', 't', 'a', '/', 'v', '3', '/', 
'm', 'e', 't', 'a', 'd', 'a', 't', 'a', '.', 'p', 'r', 'o', 't', 'o', '\022', '\026', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 
'e', '.', 'm', 'e', 't', 'a', 'd', 'a', 't', 'a', '.', 'v', '3', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 
'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '!', 'u', 'd', 'p', 'a', 
'/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', 'e', 'r', 's', 'i', 'o', 'n', 'i', 'n', 'g', '.', 'p', 
'r', 'o', 't', 'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 
'r', 'o', 't', 'o', '\"', '\225', '\002', '\n', '\013', 'M', 'e', 't', 'a', 'd', 'a', 't', 'a', 'K', 'e', 'y', '\022', '\031', '\n', '\003', 'k', 
'e', 'y', '\030', '\001', ' ', '\001', '(', '\t', 'B', '\007', '\372', 'B', '\004', 'r', '\002', '\020', '\001', 'R', '\003', 'k', 'e', 'y', '\022', 'M', '\n', 
'\004', 'p', 'a', 't', 'h', '\030', '\002', ' ', '\003', '(', '\013', '2', '/', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 
'm', 'e', 't', 'a', 'd', 'a', 't', 'a', '.', 'v', '3', '.', 'M', 'e', 't', 'a', 'd', 'a', 't', 'a', 'K', 'e', 'y', '.', 'P', 
'a', 't', 'h', 'S', 'e', 'g', 'm', 'e', 'n', 't', 'B', '\010', '\372', 'B', '\005', '\222', '\001', '\002', '\010', '\001', 'R', '\004', 'p', 'a', 't', 
'h', '\032', 'q', '\n', '\013', 'P', 'a', 't', 'h', 'S', 'e', 'g', 'm', 'e', 'n', 't', '\022', '\033', '\n', '\003', 'k', 'e', 'y', '\030', '\001', 
' ', '\001', '(', '\t', 'B', '\007', '\372', 'B', '\004', 'r', '\002', '\020', '\001', 'H', '\000', 'R', '\003', 'k', 'e', 'y', ':', '5', '\232', '\305', '\210', 
'\036', '0', '\n', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'e', 't', 'a', 'd', 'a', 't', 'a', '.', 'v', 
'2', '.', 'M', 'e', 't', 'a', 'd', 'a', 't', 'a', 'K', 'e', 'y', '.', 'P', 'a', 't', 'h', 'S', 'e', 'g', 'm', 'e', 'n', 't', 
'B', '\016', '\n', '\007', 's', 'e', 'g', 'm', 'e', 'n', 't', '\022', '\003', '\370', 'B', '\001', ':', ')', '\232', '\305', '\210', '\036', '$', '\n', '\"', 
'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'e', 't', 'a', 'd', 'a', 't', 'a', '.', 'v', '2', '.', 'M', 'e', 
't', 'a', 'd', 'a', 't', 'a', 'K', 'e', 'y', '\"', '\322', '\004', '\n', '\014', 'M', 'e', 't', 'a', 'd', 'a', 't', 'a', 'K', 'i', 'n', 
'd', '\022', 'H', '\n', '\007', 'r', 'e', 'q', 'u', 'e', 's', 't', '\030', '\001', ' ', '\001', '(', '\013', '2', ',', '.', 'e', 'n', 'v', 'o', 
'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'e', 't', 'a', 'd', 'a', 't', 'a', '.', 'v', '3', '.', 'M', 'e', 't', 'a', 'd', 'a', 
't', 'a', 'K', 'i', 'n', 'd', '.', 'R', 'e', 'q', 'u', 'e', 's', 't', 'H', '\000', 'R', '\007', 'r', 'e', 'q', 'u', 'e', 's', 't', 
'\022', 'B', '\n', '\005', 'r', 'o', 'u', 't', 'e', '\030', '\002', ' ', '\001', '(', '\013', '2', '*', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 
'y', 'p', 'e', '.', 'm', 'e', 't', 'a', 'd', 'a', 't', 'a', '.', 'v', '3', '.', 'M', 'e', 't', 'a', 'd', 'a', 't', 'a', 'K', 
'i', 'n', 'd', '.', 'R', 'o', 'u', 't', 'e', 'H', '\000', 'R', '\005', 'r', 'o', 'u', 't', 'e', '\022', 'H', '\n', '\007', 'c', 'l', 'u', 
's', 't', 'e', 'r', '\030', '\003', ' ', '\001', '(', '\013', '2', ',', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 
'e', 't', 'a', 'd', 'a', 't', 'a', '.', 'v', '3', '.', 'M', 'e', 't', 'a', 'd', 'a', 't', 'a', 'K', 'i', 'n', 'd', '.', 'C', 
'l', 'u', 's', 't', 'e', 'r', 'H', '\000', 'R', '\007', 'c', 'l', 'u', 's', 't', 'e', 'r', '\022', '?', '\n', '\004', 'h', 'o', 's', 't', 
'\030', '\004', ' ', '\001', '(', '\013', '2', ')', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'e', 't', 'a', 'd', 
'a', 't', 'a', '.', 'v', '3', '.', 'M', 'e', 't', 'a', 'd', 'a', 't', 'a', 'K', 'i', 'n', 'd', '.', 'H', 'o', 's', 't', 'H', 
'\000', 'R', '\004', 'h', 'o', 's', 't', '\032', '=', '\n', '\007', 'R', 'e', 'q', 'u', 'e', 's', 't', ':', '2', '\232', '\305', '\210', '\036', '-', 
'\n', '+', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'e', 't', 'a', 'd', 'a', 't', 'a', '.', 'v', '2', '.', 
'M', 'e', 't', 'a', 'd', 'a', 't', 'a', 'K', 'i', 'n', 'd', '.', 'R', 'e', 'q', 'u', 'e', 's', 't', '\032', '9', '\n', '\005', 'R', 
'o', 'u', 't', 'e', ':', '0', '\232', '\305', '\210', '\036', '+', '\n', ')', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 
'e', 't', 'a', 'd', 'a', 't', 'a', '.', 'v', '2', '.', 'M', 'e', 't', 'a', 'd', 'a', 't', 'a', 'K', 'i', 'n', 'd', '.', 'R', 
'o', 'u', 't', 'e', '\032', '=', '\n', '\007', 'C', 'l', 'u', 's', 't', 'e', 'r', ':', '2', '\232', '\305', '\210', '\036', '-', '\n', '+', 'e', 
'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'e', 't', 'a', 'd', 'a', 't', 'a', '.', 'v', '2', '.', 'M', 'e', 't', 
'a', 'd', 'a', 't', 'a', 'K', 'i', 'n', 'd', '.', 'C', 'l', 'u', 's', 't', 'e', 'r', '\032', '7', '\n', '\004', 'H', 'o', 's', 't', 
':', '/', '\232', '\305', '\210', '\036', '*', '\n', '(', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'e', 't', 'a', 'd', 
'a', 't', 'a', '.', 'v', '2', '.', 'M', 'e', 't', 'a', 'd', 'a', 't', 'a', 'K', 'i', 'n', 'd', '.', 'H', 'o', 's', 't', ':', 
'*', '\232', '\305', '\210', '\036', '%', '\n', '#', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'e', 't', 'a', 'd', 'a', 
't', 'a', '.', 'v', '2', '.', 'M', 'e', 't', 'a', 'd', 'a', 't', 'a', 'K', 'i', 'n', 'd', 'B', '\013', '\n', '\004', 'k', 'i', 'n', 
'd', '\022', '\003', '\370', 'B', '\001', 'B', '?', '\n', '$', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 
'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'e', 't', 'a', 'd', 'a', 't', 'a', '.', 'v', '3', 'B', '\r', 'M', 'e', 
't', 'a', 'd', 'a', 't', 'a', 'P', 'r', 'o', 't', 'o', 'P', '\001', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\002', 'b', '\006', 'p', 'r', 
'o', 't', 'o', '3', 
};

static upb_def_init *deps[4] = {
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

upb_def_init envoy_type_metadata_v3_metadata_proto_upbdefinit = {
  deps,
  layouts,
  "envoy/type/metadata/v3/metadata.proto",
  UPB_STRVIEW_INIT(descriptor, 1104)
};
