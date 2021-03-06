/* ----------------------------------------------------------------------------
 * Copyright (c) 2012, 2013, 2014 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */

/**                                                                 description
 * Default macro definitions
 */


/**                                                        macros/P/description
 * Expand `name` into the corresponding "press" function name
 */
#define  P(name)  keys__press__##name

/**                                                        macros/R/description
 * Expand `name` into the corresponding "release" function name
 */
#define  R(name)  keys__release__##name

/**                                                        macros/K/description
 * Expand into a "key" suitable for putting into the layout matrix
 */
#define  K(name)  { &keys__press__##name, &keys__release__##name }

/**                                                       macros/KF/description
 * Expand `name` into the corresponding "key_functions" function name
 */
#define  KF(name)  key_functions__##name


/**                                             macros/MATRIX_LAYER/description
 * Mapping from spatial position to matrix position.
 *
 * - Spatial position: Where the key is spatially, relative to other keys, both
 *   on the keyboard and in the layout.
 * - Matrix position: The coordinate in the matrix to which a key is scanned by
 *   the update functions.
 *
 * - Location numbers are in the format `row##column`, where both 'row' and
 *   'column' are single digit hex numbers corresponding to the matrix position
 *   (which also corresponds to the row and column pin labels used in the
 *   Teensy and MCP23018 files).
 *
 * - Coordinates:
 *     - optional keys
 *         - k15, k16 (left hand thumb group)
 *         - k17, k18 (right hand thumb group)
 *     - unused keys
 *         - k36, k00 (left hand)
 *         - k37, k0D (right hand)
 *
 * - Other Info:
 *       ----------------------------------------------------
 *                 rows x columns = positions;  used,  unused
 *       per hand:    6 x  7      = 42;         40,    2
 *          total:    6 x 14      = 84;         80,    4
 *       
 *       left hand  : rows 0..5, cols 0..6
 *       right hand : rows 0..5, cols 7..D
 *       ----------------------------------------------------
 */
#define MATRIX_LAYER(                                                                                           \
            /* the name of a macro to call on all arguments */                                                  \
            M,                                                                                                  \
                                                                                                                \
            /* for unused positions */                                                                          \
            na,                                                                                                 \
                                                                                                                \
            /* left hand, spatial positions */                                                                  \
            k50,k51,k52,k53,k54,k55,k56,                                                                        \
            k40,k41,k42,k43,k44,k45,k46,                                                                        \
            k30,k31,k32,k33,k34,k35,                                                                            \
            k20,k21,k22,k23,k24,k25,k26,                                                                        \
            k10,k11,k12,k13,k14,                                                                                \
                                    k05,k06,                                                                    \
                                k15,k16,k04,                                                                    \
                                k03,k02,k01,                                                                    \
                                                                                                                \
            /* right hand, spatial positions */                                                                 \
                k57,k58,k59,k5A,k5B,k5C,k5D,                                                                    \
                k47,k48,k49,k4A,k4B,k4C,k4D,                                                                    \
                    k38,k39,k3A,k3B,k3C,k3D,                                                                    \
                k27,k28,k29,k2A,k2B,k2C,k2D,                                                                    \
                        k19,k1A,k1B,k1C,k1D,                                                                    \
            k07,k08,                                                                                            \
            k09,k17,k18,                                                                                        \
            k0C,k0B,k0A )                                                                                       \
                                                                                                                \
    /* matrix positions */                                                                                      \
    {{ M( na),M(k01),M(k02),M(k03),M(k04),M(k05),M(k06), M(k07),M(k08),M(k09),M(k0A),M(k0B),M(k0C),M( na) },    \
     { M(k10),M(k11),M(k12),M(k13),M(k14),M(k15),M(k16), M(k17),M(k18),M(k19),M(k1A),M(k1B),M(k1C),M(k1D) },    \
     { M(k20),M(k21),M(k22),M(k23),M(k24),M(k25),M(k26), M(k27),M(k28),M(k29),M(k2A),M(k2B),M(k2C),M(k2D) },    \
     { M(k30),M(k31),M(k32),M(k33),M(k34),M(k35),M( na), M( na),M(k38),M(k39),M(k3A),M(k3B),M(k3C),M(k3D) },    \
     { M(k40),M(k41),M(k42),M(k43),M(k44),M(k45),M(k46), M(k47),M(k48),M(k49),M(k4A),M(k4B),M(k4C),M(k4D) },    \
     { M(k50),M(k51),M(k52),M(k53),M(k54),M(k55),M(k56), M(k57),M(k58),M(k59),M(k5A),M(k5B),M(k5C),M(k5D) }}

void keys__press__m_pasta1(void) {
    key_functions__type_string   ( PSTR( "Did you ever hear the tragedy of Darth Plagueis The Wise? I thought not. It’s not a story the Jedi would tell you. It’s a Sith legend. Darth Plagueis was a Dark Lord of the Sith, so powerful and so wise he could use the Force to influence the midichlorians to create life… He had such a knowledge of the dark side that he could even keep the ones he cared about from dying. The dark side of the Force is a pathway to many abilities some consider to be unnatural. He became so powerful… the only thing he was afraid of was losing his power, which eventually, of course, he did. Unfortunately, he taught his apprentice everything he knew, then his apprentice killed him in his sleep. Ironic. He could save others from death, but not himself." ) );
}
void keys__release__m_pasta1(void) {}

void keys__press__m_pasta2(void) {
    key_functions__type_string   ( PSTR( "What the fuck did you just fucking say about me, you little bitch? I’ll have you know I graduated top of my class in the Navy Seals, and I’ve been involved in numerous secret raids on Al-Quaeda, and I have over 300 confirmed kills. I am trained in gorilla warfare and I’m the top sniper in the entire US armed forces. You are nothing to me but just another target. I will wipe you the fuck out with precision the likes of which has never been seen before on this Earth, mark my fucking words. You think you can get away with saying that shit to me over the Internet? Think again, fucker. As we speak I am contacting my secret network of spies across the USA and your IP is being traced right now so you better prepare for the storm, maggot. The storm that wipes out the pathetic little thing you call your life. You’re fucking dead, kid. I can be anywhere, anytime, and I can kill you in over seven hundred ways, and that’s just with my bare hands. Not only am I extensively trained in unarmed combat, but I have access to the entire arsenal of the United States Marine Corps and I will use it to its full extent to wipe your miserable ass off the face of the continent, you little shit. If only you could have known what unholy retribution your little “clever” comment was about to bring down upon you, maybe you would have held your fucking tongue. But you couldn’t, you didn’t, and now you’re paying the price, you goddamn idiot. I will shit fury all over you and you will drown in it. You’re fucking dead, kiddo." ) );
}
void keys__release__m_pasta2(void) {}

void keys__press__m_pasta3(void) {
    key_functions__type_string   ( PSTR( "The original machine had a base plate of prefabulated amulite, surmounted by a malleable logarithmic casing in such a way that the two spurving bearings were in direct line with the pentametric fan. The latter consisted simply of six hydrocoptic marzelvanes, so fitted to the ambifacient lunar waneshaft that side fumbline was effectively prevented. The main winding was of the normal lotus-0-delta type placed in panendermic semiboiloid slots in the stator, every seventh conductor being connected by a nonreversible tremie pipe to the differential gridlespring on the \"up\" end of the grammeters." ));
}
void keys__release__m_pasta3(void) {}

#define KB_Alt 0xE2
#define KP_1 0x59  // √  √   √     84/101/104
#define KP_2 0x5A  // √  √   √     84/101/104
#define KP_3 0x5B  // √  √   √     84/101/104
#define KP_4 0x5C  // √  √   √     84/101/104
#define KP_5 0x5D  // √  √   √     84/101/104
#define KP_6 0x5E  // √  √   √     84/101/104
#define KP_7 0x5F  // √  √   √     84/101/104
#define KP_8 0x60  // √  √   √     84/101/104
#define KP_9 0x61  // √  √   √     84/101/104
#define KP_0 0x62  // √  √   √     84/101/104

#define my_alt_code(a, b, c)         usb__kb__set_key(true, KB_Alt); usb__kb__send_report();\
    usb__kb__set_key(true, a); usb__kb__send_report(); \
    usb__kb__set_key(false, a); usb__kb__send_report(); \
    usb__kb__set_key(true, b); usb__kb__send_report(); \
    usb__kb__set_key(false, b); usb__kb__send_report(); \
    usb__kb__set_key(true, c); usb__kb__send_report(); \
    usb__kb__set_key(false, c); usb__kb__send_report(); \
    usb__kb__set_key(false, KB_Alt); usb__kb__send_report();

void keys__press__m_a128(void) {
    my_alt_code(KP_1, KP_2, KP_8);
}
void keys__release__m_a128(void) {}

void keys__press__m_a130(void) {
    my_alt_code(KP_1, KP_3, KP_0);
}
void keys__release__m_a130(void) {}

void keys__press__m_a131(void) {
    my_alt_code(KP_1, KP_3, KP_1);
}
void keys__release__m_a131(void) {}

void keys__press__m_a133(void) {
    my_alt_code(KP_1, KP_3, KP_3);
}
void keys__release__m_a133(void) {}

void keys__press__m_a135(void) {
    my_alt_code(KP_1, KP_3, KP_5);
}
void keys__release__m_a135(void) {}

void keys__press__m_a136(void) {
    my_alt_code(KP_1, KP_3, KP_6);
}
void keys__release__m_a136(void) {}

void keys__press__m_a138(void) {
    my_alt_code(KP_1, KP_3, KP_8);
}
void keys__release__m_a138(void) {}

void keys__press__m_a140(void) {
    my_alt_code(KP_1, KP_4, KP_0);
}
void keys__release__m_a140(void) {}

void keys__press__m_a141(void) {
    my_alt_code(KP_1, KP_4, KP_1);
}
void keys__release__m_a141(void) {}

void keys__press__m_a144(void) {
    my_alt_code(KP_1, KP_4, KP_4);
}
void keys__release__m_a144(void) {}

void keys__press__m_a147(void) {
    my_alt_code(KP_1, KP_4, KP_7);
}
void keys__release__m_a147(void) {}

void keys__press__m_a149(void) {
    my_alt_code(KP_1, KP_4, KP_9);
}
void keys__release__m_a149(void) {}

void keys__press__m_a150(void) {
    my_alt_code(KP_1, KP_5, KP_0);
}
void keys__release__m_a150(void) {}

void keys__press__m_a151(void) {
    my_alt_code(KP_1, KP_5, KP_1);
}
void keys__release__m_a151(void) {}

void keys__press__m_a160(void) {
    my_alt_code(KP_1, KP_6, KP_0);
}
void keys__release__m_a160(void) {}

void keys__press__m_a161(void) {
    my_alt_code(KP_1, KP_6, KP_1);
}
void keys__release__m_a161(void) {}

void keys__press__m_a162(void) {
    my_alt_code(KP_1, KP_6, KP_2);
}
void keys__release__m_a162(void) {}

void keys__press__m_a163(void) {
    my_alt_code(KP_1, KP_6, KP_3);
}
void keys__release__m_a163(void) {}


// Do this for all your macro functions
void P(m_copy)(void) {}

// key_functions__type_string(const char * string) {