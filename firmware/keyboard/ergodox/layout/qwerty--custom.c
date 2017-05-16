/* ----------------------------------------------------------------------------
 * Copyright (c) 2013, 2014 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */

/**                                                                 description
 * My QWERTY layout, at the moment.  I imagine this will evolve over time.
 * Once I'm done with the Arensito layout, it may disappear altogether.
 *
 * Implements the "layout" section of '.../firmware/keyboard.h'
 */


#include "./fragments/includes.part.h"
#include "./fragments/macros.part.h"
#include "./fragments/types.part.h"
#include "./fragments/variables.part.h"


// ----------------------------------------------------------------------------
// keys
// ----------------------------------------------------------------------------

#include "./fragments/keys.part.h"


// ----------------------------------------------------------------------------
// LED control
// ----------------------------------------------------------------------------

#include "./fragments/led-control.part.h"


// ----------------------------------------------------------------------------
// matrix control
// ----------------------------------------------------------------------------

#include "./fragments/matrix-control.part.h"


// ----------------------------------------------------------------------------
// layout
// ----------------------------------------------------------------------------

static layout_t layout PROGMEM = {
// ............................................................................

    MATRIX_LAYER(  // layer 0 : COLEMAK (default)
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  esc,        1,        2,        3,        4,        5,      nop,
grave,        q,        w,        f,        p,        g,      nop,
  tab,        a,        r,        s,        t,        d,
shL2kcap,     z,        x,        c,        v,        b,  lpupo2l2,
    ctrlL,    altL,  guiL,    brktL,    brktR,
                                                                 nop,   lpu1l1,
                                                       nop,      nop,  nonUSBkslash,
                                                        bs,      del,  bkslash,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,        6,        7,        8,        9,        0,     dash,
               nop,        j,        l,        u,        y,  semicol,    equal,
                           h,        n,        e,        i,        o,    quote,
           lpupo2l2,        k,        m,    comma,   period,    slash, shR2kcap,
                                arrowL,   arrowD,   arrowU,   arrowR,    ctrlR,
    caps,    prScr,
     num,      nop,      nop,
    scrl,    enter,    space  ),

// ............................................................................

    MATRIX_LAYER(  // layer 1 : QWERTY (mask)
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   q,        w,        e,        r,        t,        transp,
  transp,   a,        s,        d,        f,        g,
  transp,   z,        x,        c,        v,        b,        transp,
  transp,   transp,   transp,   transp,   transp,
                                                              transp,   lpo1l1,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
            transp,   transp,   transp,   transp,   transp,   transp,   transp,
            transp,        y,        u,        i,        o,        p,   transp,
                           h,        j,        k,        l,  semicol,   transp,
            transp,        n,        m,   transp,   transp,   transp,   transp,
                                transp,   transp,   transp,   transp,   transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,   transp  ),

// ............................................................................

    MATRIX_LAYER(  // layer 2 : special keys (numpad)
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
     nop,      F1,       F2,       F3,       F4,       F5,       F11,
     m_a144,   m_a160,   m_a130,   m_a161,   m_a162,   m_a163,   nop,
     m_a128,   m_a131,   m_a136,   m_a140,   m_a147,   m_a150,
     m_a135,   m_a133,   m_a138,   m_a141,   m_a149,   m_a151,   nop,
     ctrlL,      altL,      nop,      nop,      nop,
                                                               btldr,  m_pasta1,
                                                       nop,      nop,  m_pasta2,
                                                       nop,      nop,  m_pasta3,
// right hand ..... ......... ......... ......... ......... ......... .........
               F12,       F6,       F7,       F8,       F9,      F10,      nop,
               nop,      nop,      kp7,      kp8,      kp9,    kpMul,     kpDiv,
                         nop,      kp4,      kp5,      kp6,    kpSub,     equal,
               nop,      nop,      kp1,      kp2,      kp3,    kpAdd,      nop,
                                   kp0,      kp0,    period, kpEnter,      nop,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,      nop  ),

// ............................................................................

    MATRIX_LAYER(  // layer 3 : hardware functions
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
   btldr,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,
                                                                 nop,      nop,
                                                       nop,      nop,      nop,
                                                       nop,      nop,      nop,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,      nop,      nop,      nop,      nop,      nop, dmp_sram,
               nop,      nop,      nop,      nop,      nop,      nop, dmp_prog,
                         nop,      nop,      nop,      nop,      nop, dmp_eepr,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                                   nop,      nop,      nop,      nop,      nop,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,      nop  ),

// ............................................................................
};