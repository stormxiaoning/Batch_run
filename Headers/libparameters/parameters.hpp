/**
 * @file parameters.hpp
 * @author Olivier Delestre <olivierdelestre41@yahoo.fr> (2008)
 * @author Christian Laguerre <christian.laguerre@math.cnrs.fr> (2011-2017)
 * @version 1.07.01
 * @date 2017-05-09
 *
 * @brief Gets parameters
 * @details 
 * Reads the parameters, checks their values.
 *
 * @copyright License Cecill-V2  \n
 * <http://www.cecill.info/licences/Licence_CeCILL_V2-en.html>
 *
 * (c) CNRS - Universite d'Orleans - BRGM (France)
 */
/*
 * This file is part of FullSWOF_2D software. 
 * <https://sourcesup.renater.fr/projects/fullswof-2d/> 
 *
 * FullSWOF_2D = Full Shallow-Water equations for Overland Flow, 
 * in two dimensions of space.
 * This software is a computer program whose purpose is to compute
 * solutions for 2D Shallow-Water equations.
 *
 * LICENSE
 *
 * This software is governed by the CeCILL license under French law and
 * abiding by the rules of distribution of free software. You can use,
 * modify and/ or redistribute the software under the terms of the CeCILL
 * license as circulated by CEA, CNRS and INRIA at the following URL
 * <http://www.cecill.info>.
 *
 * As a counterpart to the access to the source code and rights to copy,
 * modify and redistribute granted by the license, users are provided only
 * with a limited warranty and the software's author, the holder of the
 * economic rights, and the successive licensors have only limited
 * liability.
 *
 * In this respect, the user's attention is drawn to the risks associated
 * with loading, using, modifying and/or developing or reproducing the
 * software by the user in light of its specific status of free software,
 * that may mean that it is complicated to manipulate, and that also
 * therefore means that it is reserved for developers and experienced
 * professionals having in-depth computer knowledge. Users are therefore
 * encouraged to load and test the software's suitability as regards their
 * requirements in conditions enabling the security of their systems and/or
 * data to be ensured and, more generally, to use and operate it in the
 * same conditions as regards security.
 *
 * The fact that you are presently reading this means that you have had
 * knowledge of the CeCILL license and that you accept its terms.
 *
 ******************************************************************************/

#include "misc.hpp"

#ifndef PARSER_HPP
#include "parser.hpp"
#endif

#ifndef PARAMETERS_HPP
#define PARAMETERS_HPP

/** @class Parameters
 * @brief Gets parameters
 * @details 
 * Class that reads the parameters, checks their values and 
 * contains all the common declarations to get the values of the parameters.
 */


class Parameters{
    
  public :
    
    /** @brief Constructor */
    Parameters();
    
    /** @brief Sets the parameters */
    void setparameters(const char *);
    
    /** @brief Destructor */
    virtual ~Parameters();
    
    /** @brief Gives the number of cells in space along x*/
    int get_Nxcell() const ;
    
    /** @brief Gives the number of cells in space along y*/
    int  get_Nycell() const ;
    
    /** @brief Gives the final time*/
    SCALAR  get_T() const ;
    
    /** @brief Gives the number of times saved */
    int  get_nbtimes() const ;
    
    /** @brief Gives the choice of type of scheme (fixed cfl or fixed dt)*/
    int  get_scheme_type() const ;
    
    /** @brief Gives the fixed time step from the parameters.txt file*/
    SCALAR  get_dtfix() const ;
    
    /** @brief Gives the cfl of the scheme */
    SCALAR  get_cflfix() const ;
    
    /** @brief Gives the space step along x*/
    SCALAR get_dx() const ;
    
    /** @brief Gives the space step along y*/
    SCALAR  get_dy() const ;
    
    /** @brief Gives the length of the domain in the first (x) direction.*/
    SCALAR get_L() const ;
    /** @brief Gives the length of the domain in the second (y) direction.*/
    SCALAR get_l() const ;

    /** @brief Gives the value corresponding to the left boundary condition */
    map<int,int> & get_Lbound()  ;

    /** @brief Gives the list of files and time values corresponding to the left boundary condition */
    map<SCALAR,string> & get_times_files_Lbound()  ;
 
    /** @brief Gives the type (constant or file) of the left boundary condition */
    int get_type_Lbound() const ;
    
    /** @brief Gives the value of the imposed discharge in left bc */
     map<int,SCALAR> & get_left_imp_discharge()  ;
  
    /** @brief Gives the value of the imposed water height in left bc */
    map<int,SCALAR> & get_left_imp_h()  ;
  
    /** @brief Gives the value corresponding to the right boundary condition */
    map<int,int> & get_Rbound()  ;
    
    /** @brief Gives the list of files and time values corresponding to the right boundary condition */
    map<SCALAR,string> & get_times_files_Rbound()  ;

    /** @brief Gives the type (constant or file) of right boundary condition */
    int get_type_Rbound() const ;
  
    /** @brief Gives the value of the imposed discharge in right bc */
    map<int,SCALAR> & get_right_imp_discharge()  ;
  
    /** @brief Gives the value of the imposed water height in right bc */
     map<int,SCALAR> & get_right_imp_h()  ;
  
    /** @brief Gives the value corresponding to the bottom boundary condition */
    map<int,int> & get_Bbound()  ;
  
    /** @brief Gives the list of files and time values corresponding to the bottom boundary condition */
    map<SCALAR,string> & get_times_files_Bbound()  ;
     
    /** @brief Gives the type (constant or file) of bottom boundary condition */
    int get_type_Bbound() const ;
  
    /** @brief Gives the value of the imposed discharge in bottom bc */
    map<int,SCALAR> & get_bottom_imp_discharge()  ;
  
    /** @brief Gives the value of the imposed water height in bottom bc */
    map<int,SCALAR> & get_bottom_imp_h()  ;
  
    /** @brief Gives the value corresponding to the top boundary condition */
    map<int,int> & get_Tbound() ;
    
    /** @brief Gives the list of files and time values corresponding to the top boundary condition */
    map<SCALAR,string> & get_times_files_Tbound()  ;

    /** @brief Gives the type (constant or file) of bottom boundary condition */
    int get_type_Tbound() const ;
  
    /** @brief Gives the value of the imposed discharge in top bc */
     map<int,SCALAR> & get_top_imp_discharge()  ;
  
    /** @brief Gives the value of the imposed water height in top bc */
     map<int,SCALAR> & get_top_imp_h() ;
  
    /** @brief Gives the value corresponding to the flux */
    int  get_flux() const ;
    
    /** @brief Gives the order of the scheme */
    int get_order() const ;
    
    /** @brief Gives the value corresponding to the reconstruction */
    int get_rec() const ;
    
    /** @brief Gives the value corresponding to the friction law */
    int get_fric() const ;
    
    /** @brief Gives the value corresponding to the limiter */
    int get_lim() const ;
    
    /** @brief Gives the choice of infiltration model */
    int get_inf() const ;
    
    /** @brief Gives the value of the amortENO parameter */
    SCALAR get_amortENO() const ;
    
    /** @brief Gives the value of the modifENO parameter */
    SCALAR get_modifENO() const;
    
    /** @brief Gives the value of the friction coefficient */
    SCALAR get_friccoef() const ;
    
    /** @brief Gives the value characterizing the spatialization (or not) of the friction coefficient*/
    int get_fric_init() const ;
    
    /** @brief Gives the full name of the file containing the hydraulic conductivity of the crust */
    string get_KcNameFile(void) const;
    
    /** @brief Gives the name of the file containing the hydraulic conductivity of the crust */
    string get_KcNameFileS() const;
  
    /** @brief Gives the full name of the file containing the hydraulic conductivity of the surface */
    string get_KsNameFile(void) const;
    
    /** @brief Gives the name of the file containing the hydraulic conductivity of the surface */
    string get_KsNameFileS() const;
    
    /** @brief Gives the full name of the file containing the water content */
    string get_dthetaNameFile(void) const;
    
    /** @brief Gives the name of the file containing the water content */
    string get_dthetaNameFileS() const;
    
    /** @brief Gives the full name of the file containing the load pressure */
    string get_PsiNameFile(void) const;
    
    /** @brief Gives the name of the file containing the load pressure */
    string get_PsiNameFileS() const;
    
    /** @brief Gives the full name of the file containing the thickness of the crust */
    string get_zcrustNameFile(void) const;
    
    /** @brief Gives the name of the file containing the thickness of the crust */
    string get_zcrustNameFileS() const;
    
    /** @brief Gives the full name of the file containing the maximum infiltration rate */
    string get_imaxNameFile(void) const;
    
    /** @brief Gives the name of the file containing the maximum infiltration rate */
    string get_imaxNameFileS() const;
    
    /** @brief Gives the value characterizing the spatialization (or not) of the hydraulic conductivity of the crust */
    int get_Kc_init() const ;
    
    /** @brief Gives the value of the hydraulic conductivity of the crust */
    SCALAR get_Kc_coef() const ;
    
    /** @brief Gives the value characterizing the spatialization (or not) of the hydraulic conductivity of the soil */
    int get_Ks_init() const ;
    
    /** @brief Gives the value of the hydraulic conductivity of the soil */
    SCALAR get_Ks_coef() const ;
    
    /** @brief Gives the value characterizing the spatialization (or not) of the water content*/
    int get_dtheta_init() const ;
    
    /** @brief Gives the value of the water content */
    SCALAR get_dtheta_coef() const ;
    
    /** @brief Gives the value characterizing the spatialization (or not) of the load pressure */
    int get_Psi_init() const ;
    
    /** @brief Gives the value of the load pressure */
    SCALAR get_Psi_coef() const ;
    
    /** @brief Gives the value characterizing the spatialization (or not) of the thickness of the crust */
    int get_zcrust_init() const ;
    
    /** @brief Gives the value of the thickness of the crust */
    SCALAR get_zcrust_coef() const ;
    
    /** @brief Gives the value characterizing the spatialization (or not) of the maximum infiltration rate */
    int get_imax_init() const ;
    
    /** @brief Gives the value of the maximum infiltration rate */
    SCALAR get_imax_coef() const ;
    
    /** @brief Gives the value corresponding to the choice of topography */
    int get_topo() const ;
    
    /** @brief Gives the value corresponding to the choice of initialization of h, u and v*/
    int get_huv() const ;
    
    /** @brief Gives the value corresponding to the choice of initialization of rain */
    int get_rain() const ;
    
    /** @brief Gives the full name of the file containing the topography */
    string get_topographyNameFile(void) const;
    
    /** @brief Gives the name of the file containing the topography*/
    string get_topographyNameFileS() const;
    
    /** @brief Gives the full name of the file containing the water height (h) and the velocities (u and v) */
    string get_huvNameFile(void) const;
    
    /** @brief Gives the name of the file containing the water height (h) and the velocities (u and v) */
    string get_huvNameFileS(void) const;
    
    /** @brief Gives the full name of the file containing the rain */
    string get_rainNameFile(void) const;
    
    /** @brief Gives the name of the file containing the rain */
    string get_rainNameFileS(void) const;
    
    /** @brief Gives the full name of the file containing the friction coefficient */
    string get_frictionNameFile(void) const;
    
    /** @brief Gives the name of the file containing the friction coefficient */
    string get_frictionNameFileS(void) const;
    
    /** @brief Gives the output directory with the suffix */
    string get_outputDirectory(void) const;
    
    /** @brief Gives the suffix for the 'Outputs' directory */
    string get_suffix(void) const;
    
    /** @brief Gives the value corresponding to the choice of the format of the Output file */
    int get_output() const ;

    /** @brief Gives the choice of specific points to be saved */
    int get_choice_specific_point() const;

    /** @brief Gives the choice of time step for specific points to be saved */
    int get_choice_dt_specific_points() const;

    /** @brief Gives time step for specific points to be saved  */
    SCALAR get_dt_specific_points() const;

    /** @brief Fills the TAB array with a SCALAR */
    void fill_array(TAB & ,const SCALAR) const ;
    
    /** @brief Fills the TAB array with the values contained in a file  */
    void fill_array(TAB & ,string) const ;

    /** @brief Verifies if the coordinates x and y exist in the mesh  */
    bool is_coord_in_file_valid(const SCALAR & x, const SCALAR & y, int num_lin,string namefile) const;
  
    /** @brief Gives x coordinate of the specific point to be saved */
    SCALAR get_x_coord(void) const;
    
    /** @brief Gives y coordinate of the specific point to be saved */
    SCALAR get_y_coord(void) const;
    
    /** @brief Gives the full name of file containing the list of the specific points */
    string get_list_pointNameFile(void) const;

    /** @brief Gives the name of the file containing the list of the specific points */
    string get_list_pointNameFileS(void) const;

    /** @brief Returns the vector containing the choice of boundary conditions. 
	The two containers will contain the values of discharge and water heights imposed for each point.
    */
    map<int,int>  fill_array_bc_inhomogeneous(string, string, char, map<int,SCALAR> &, map<int,SCALAR> & );
  
   /** @brief Returns the list of files and time values corresponding to the boundary condition. 
       Moreover, fills the containers that will contain the choice of boundary conditions,
       the values of discharge and water heights imposed for each point.
    */
    map<SCALAR,string> verif_file_bc_inhomogeneous(string, string, char, map<int,int> &, map<int,SCALAR> &, map<int,SCALAR> & );

    /*** @brief Returns the name of the input directory*/
    string get_path_input_directory(void) const;

protected :
    
    /** Value of the fixed cfl.*/
    SCALAR cfl_fix;
    /** Value of the fixed time step.*/
    SCALAR dt_fix;
    /** Type of scheme (fixed cfl or time step).*/
    int scheme_type;
    /** Number of cells in space in the first (x) direction.*/
    int Nxcell;
    /** Number of cells in space in the second (y) direction.*/
    int Nycell;
    /**  Number of times saved.*/
    int nbtimes;
    /** Final time.*/
    SCALAR T;
    /** Space step in the first (x) direction.*/
    SCALAR dx;
    /** Space step in the second (y) direction.*/
    SCALAR dy;
    /** Length of the domain in the first (x) direction.*/
    SCALAR L;
    /** Length of the domain in the second (y) direction.*/
    SCALAR l;
    /** Left boundary condition.*/
    map<int,int> Lbound;
    /** Imposed discharge on the left boundary.*/
     map<int,SCALAR> left_imp_discharge;
    /** Imposed water height on the left boundary.*/
    map<int,SCALAR> left_imp_h;
    /** List of files and time values corresponding to the left boundary condition.*/
    map<SCALAR,string> left_times_files;
    /** Type (constant or file) of left boundary condition */
    int Lbound_type;
    /** Right boundary condition.*/
    map<int,int> Rbound;
    /** Imposed discharge on the right boundary.*/
    map<int,SCALAR> right_imp_discharge;
    /** Imposed water height on the right boundary.*/
    map<int,SCALAR> right_imp_h;
    /** List of files and time values corresponding to the right boundary condition.*/
    map<SCALAR,string> right_times_files;
    /** Type (constant or file) of right boundary condition */
    int Rbound_type;
    /** Bottom boundary condition.*/
    map<int,int> Bbound;
    /** Imposed discharge on the bottom boundary.*/
    map<int,SCALAR> bottom_imp_discharge;
    /** Imposed water height on the bottom boundary.*/
    map<int,SCALAR> bottom_imp_h;
    /** List of files and time values corresponding to the bottom boundary condition.*/
    map<SCALAR,string> bottom_times_files;
    /** Type (constant or file) of bottom boundary condition */
    int Bbound_type;
    /** Top boundary condition.*/
    map<int,int> Tbound;
    /** Imposed discharge on the top boundary.*/
    map<int,SCALAR> top_imp_discharge;
    /** Imposed water height on the top boundary.*/
    map<int,SCALAR> top_imp_h;
    /** List of files and time values corresponding to the top boundary condition.*/
    map<SCALAR,string> top_times_files;
    /** Type (constant or file) of top boundary condition */
    int Tbound_type;
    /** Numerical flux.*/
    int flux;
    /** Order of the numerical scheme.*/
    int order;
    /** %Reconstruction.*/
    int rec;
    /** %Friction.*/
    int fric;
    /** Slope limiter.*/
    int lim;
    /** Type of infiltration.*/
    int inf;
    /** Type of topography.*/
    int topo;
    /** Type of initial conditions for h and u,v.*/
    int huv_init;
    /** Type of rain.*/
    int rain;
    /** Type of initialization of Kc.*/
    int Kc_init;
    /** Type of initialization of Ks.*/
    int Ks_init;
    /** Type of initialization of dtheta.*/
    int dtheta_init;
    /** Type of initialization of Psi.*/
    int Psi_init;
    /** Type of initialization of zcrust.*/
    int zcrust_init;
    /** Type of initialization of imax.*/
    int imax_init;
    /** Type of output.*/
    int output_format;
    /** Parameter for eno.*/
    SCALAR amortENO;
    /** Parameter for eno_modif.*/
    SCALAR modifENO;
    /** Type of friction coefficient.*/
    int fric_init;
    /** %Friction coefficient.*/
    SCALAR friccoef;
    /** Value of Kc.*/
    SCALAR Kc_coef;
    /** Value of Ks.*/
    SCALAR Ks_coef;
    /** Value of dtheta.*/
    SCALAR dtheta_coef;
    /** Value of Psi.*/
    SCALAR Psi_coef;
    /** Value of zcrust.*/
    SCALAR zcrust_coef;
    /** Value of imax.*/
    SCALAR imax_coef;
    /** Name of the file for the topography: Inputs/file.*/
    string topography_namefile;
    /** Name of the file for the topography without 'Inputs'.*/
    string topo_NF;
    /** Name of the file for the initialization of h and u,v: Inputs/file.*/
    string huv_namefile;
    /** Name of the file for the initialization of h and u,v without 'Inputs'.*/
    string huv_NF;
    /** Name of the file for the friction coefficient: Inputs/file.*/
    string fric_namefile;
    /** Name of the file for the friction coefficient without 'Inputs'.*/
    string fric_NF;
    /** Name of the file for the rain: Inputs/file.*/
    string rain_namefile;
    /** Name of the file for the rain without 'Inputs'.*/
    string rain_NF;
    /** Name of the file for Kc: Inputs/file.*/
    string Kc_namefile;
    /** Name of the file for Kc without 'Inputs'.*/
    string Kc_NF;
    /** Name of the file for Ks: Inputs/file.*/
    string Ks_namefile;
    /** Name of the file for Ks without 'Inputs'.*/
    string Ks_NF;
    /** Name of the file for dtheta: Inputs/file.*/
    string dtheta_namefile;
    /** Name of the file for dtheta without 'Inputs'.*/
    string dtheta_NF;
    /** Name of the file for Psi: Inputs/file.*/
    string Psi_namefile;
    /** Name of the file for Psi without 'Inputs'.*/
    string Psi_NF;
    /** Name of the file for zcrust: Inputs/file.*/
    string zcrust_namefile;
    /** Name of the file for zcrust without 'Inputs'.*/
    string zcrust_NF;
    /** Name of the file for imax: Inputs/file.*/
    string imax_namefile;
    /** Name of the file for imax without 'Inputs'.*/
    string imax_NF;
    /** Name of the output directory Outputs+suffix.*/
    string output_directory;
    /** Suffix for the output directory.*/
    string suffix_outputs;
    /** Choice of the number of specific points to be saved.*/ 
    int Choice_points;
    /** x coordinate of the specific point to be saved.*/ 
    SCALAR x_coord;
    /** y coordinate of the specific point to be saved.*/ 
    SCALAR y_coord;
    /** Name of file containing the list of the specific points.*/
    string list_point_NF;
    /** Name of file containing the list of the specific points without 'Inputs'.*/
    string list_point_namefile;
    /** The list of the specific points.*/
    VECT list_points_x, list_points_y;
    /** Choice between saving specific points at each time or only for a given time step. */
    int Choice_dt_specific_points;
    /** Time step to save the list of the specific points.*/
    SCALAR dt_specific_points;
    /**Name of the input directory*/
    string path_input_directory ;
private:
  
    string namefile;
    string parser_output,parser_output2;
    string parser_Limp_q, parser_Limp_h;
    string parser_Rimp_q, parser_Rimp_h;
    string parser_Timp_q, parser_Timp_h;
    string parser_Bimp_q, parser_Bimp_h;
    string parser_specific_points;
};


#endif
