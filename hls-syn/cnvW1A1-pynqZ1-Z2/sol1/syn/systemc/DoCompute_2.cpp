#include "DoCompute.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void DoCompute::thread_ap_clk_no_reset_() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, DoCompute_entry33612_U0_ap_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()))) {
        DoCompute_entry33612_U0_ap_ready_count = (!DoCompute_entry33612_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(DoCompute_entry33612_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(DoCompute_entry33612_U0_ap_ready.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()))) {
        DoCompute_entry33612_U0_ap_ready_count = (!DoCompute_entry33612_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(DoCompute_entry33612_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, Matrix_Vector_Activa_1_U0_ap_ready.read()))) {
        Matrix_Vector_Activa_1_U0_ap_ready_count = (!Matrix_Vector_Activa_1_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Matrix_Vector_Activa_1_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, Matrix_Vector_Activa_1_U0_ap_ready.read()))) {
        Matrix_Vector_Activa_1_U0_ap_ready_count = (!Matrix_Vector_Activa_1_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Matrix_Vector_Activa_1_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, Matrix_Vector_Activa_2_U0_ap_ready.read()))) {
        Matrix_Vector_Activa_2_U0_ap_ready_count = (!Matrix_Vector_Activa_2_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Matrix_Vector_Activa_2_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, Matrix_Vector_Activa_2_U0_ap_ready.read()))) {
        Matrix_Vector_Activa_2_U0_ap_ready_count = (!Matrix_Vector_Activa_2_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Matrix_Vector_Activa_2_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, Matrix_Vector_Activa_3_U0_ap_ready.read()))) {
        Matrix_Vector_Activa_3_U0_ap_ready_count = (!Matrix_Vector_Activa_3_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Matrix_Vector_Activa_3_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, Matrix_Vector_Activa_3_U0_ap_ready.read()))) {
        Matrix_Vector_Activa_3_U0_ap_ready_count = (!Matrix_Vector_Activa_3_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Matrix_Vector_Activa_3_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, Matrix_Vector_Activa_4_U0_ap_ready.read()))) {
        Matrix_Vector_Activa_4_U0_ap_ready_count = (!Matrix_Vector_Activa_4_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Matrix_Vector_Activa_4_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, Matrix_Vector_Activa_4_U0_ap_ready.read()))) {
        Matrix_Vector_Activa_4_U0_ap_ready_count = (!Matrix_Vector_Activa_4_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Matrix_Vector_Activa_4_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, Matrix_Vector_Activa_5_U0_ap_ready.read()))) {
        Matrix_Vector_Activa_5_U0_ap_ready_count = (!Matrix_Vector_Activa_5_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Matrix_Vector_Activa_5_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, Matrix_Vector_Activa_5_U0_ap_ready.read()))) {
        Matrix_Vector_Activa_5_U0_ap_ready_count = (!Matrix_Vector_Activa_5_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Matrix_Vector_Activa_5_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, Matrix_Vector_Activa_6_U0_ap_ready.read()))) {
        Matrix_Vector_Activa_6_U0_ap_ready_count = (!Matrix_Vector_Activa_6_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Matrix_Vector_Activa_6_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, Matrix_Vector_Activa_6_U0_ap_ready.read()))) {
        Matrix_Vector_Activa_6_U0_ap_ready_count = (!Matrix_Vector_Activa_6_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Matrix_Vector_Activa_6_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, Matrix_Vector_Activa_7_U0_ap_ready.read()))) {
        Matrix_Vector_Activa_7_U0_ap_ready_count = (!Matrix_Vector_Activa_7_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Matrix_Vector_Activa_7_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, Matrix_Vector_Activa_7_U0_ap_ready.read()))) {
        Matrix_Vector_Activa_7_U0_ap_ready_count = (!Matrix_Vector_Activa_7_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Matrix_Vector_Activa_7_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, Matrix_Vector_Activa_8_U0_ap_ready.read()))) {
        Matrix_Vector_Activa_8_U0_ap_ready_count = (!Matrix_Vector_Activa_8_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Matrix_Vector_Activa_8_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, Matrix_Vector_Activa_8_U0_ap_ready.read()))) {
        Matrix_Vector_Activa_8_U0_ap_ready_count = (!Matrix_Vector_Activa_8_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Matrix_Vector_Activa_8_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, Matrix_Vector_Activa_U0_ap_ready.read()))) {
        Matrix_Vector_Activa_U0_ap_ready_count = (!Matrix_Vector_Activa_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Matrix_Vector_Activa_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, Matrix_Vector_Activa_U0_ap_ready.read()))) {
        Matrix_Vector_Activa_U0_ap_ready_count = (!Matrix_Vector_Activa_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Matrix_Vector_Activa_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sync_ready.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, Mem2Stream_Batch_U0_ap_ready.read()))) {
        Mem2Stream_Batch_U0_ap_ready_count = (!Mem2Stream_Batch_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Mem2Stream_Batch_U0_ap_ready_count.read()) - sc_biguint<2>(ap_const_lv2_1));
    } else if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_sync_ready.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, Mem2Stream_Batch_U0_ap_ready.read()))) {
        Mem2Stream_Batch_U0_ap_ready_count = (!Mem2Stream_Batch_U0_ap_ready_count.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(Mem2Stream_Batch_U0_ap_ready_count.read()) + sc_biguint<2>(ap_const_lv2_1));
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_DoCompute_entry33612_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_DoCompute_entry33612_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_DoCompute_entry33612_U0_ap_ready = ap_sync_DoCompute_entry33612_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Matrix_Vector_Activa_1_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_Matrix_Vector_Activa_1_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Matrix_Vector_Activa_1_U0_ap_ready = ap_sync_Matrix_Vector_Activa_1_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Matrix_Vector_Activa_2_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_Matrix_Vector_Activa_2_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Matrix_Vector_Activa_2_U0_ap_ready = ap_sync_Matrix_Vector_Activa_2_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Matrix_Vector_Activa_3_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_Matrix_Vector_Activa_3_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Matrix_Vector_Activa_3_U0_ap_ready = ap_sync_Matrix_Vector_Activa_3_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Matrix_Vector_Activa_4_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_Matrix_Vector_Activa_4_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Matrix_Vector_Activa_4_U0_ap_ready = ap_sync_Matrix_Vector_Activa_4_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Matrix_Vector_Activa_5_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_Matrix_Vector_Activa_5_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Matrix_Vector_Activa_5_U0_ap_ready = ap_sync_Matrix_Vector_Activa_5_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Matrix_Vector_Activa_6_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_Matrix_Vector_Activa_6_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Matrix_Vector_Activa_6_U0_ap_ready = ap_sync_Matrix_Vector_Activa_6_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Matrix_Vector_Activa_7_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_Matrix_Vector_Activa_7_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Matrix_Vector_Activa_7_U0_ap_ready = ap_sync_Matrix_Vector_Activa_7_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Matrix_Vector_Activa_8_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_Matrix_Vector_Activa_8_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Matrix_Vector_Activa_8_U0_ap_ready = ap_sync_Matrix_Vector_Activa_8_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Matrix_Vector_Activa_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_Matrix_Vector_Activa_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Matrix_Vector_Activa_U0_ap_ready = ap_sync_Matrix_Vector_Activa_U0_ap_ready.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_sync_reg_Mem2Stream_Batch_U0_ap_ready = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, (ap_start.read() & 
             ap_sync_ready.read()))) {
            ap_sync_reg_Mem2Stream_Batch_U0_ap_ready = ap_const_logic_0;
        } else {
            ap_sync_reg_Mem2Stream_Batch_U0_ap_ready = ap_sync_Mem2Stream_Batch_U0_ap_ready.read();
        }
    }
}

}

