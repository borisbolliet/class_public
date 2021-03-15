#include "class_sz_macros.h"


class_sz_string_parameter(UNWISE_dndz_file,"/sz_auxiliary_files/UNWISE_galaxy_distributions/normalised_dndz.txt","unWISE dndz file")
class_sz_string_parameter(UNWISE_fdndz_file,"/sz_auxiliary_files/UNWISE_galaxy_distributions/normalised_fdndz.txt","unWISE fdndz file")
class_sz_string_parameter(WISC3_dndz_file,"/sz_auxiliary_files/WISC_bin3.txt","WISC bin 3 file")
class_sz_string_parameter(A10_file,"/sz_auxiliary_files/class_sz_lnIgnfw-and-d2lnIgnfw-vs-lnell-over-ell500_A10.txt","A10 file")

//printf("-> File Name pr: %s\n",ptsz->WISC3_dndz_file);

#undef class_sz_ptsz_parameter
#undef class_sz_string_parameter
#undef class_sz_type_parameter