/*
 * $ Copyright 2016-YEAR Cypress Semiconductor $
 */

/** @file
 *
 * Utilities for controlling ePA.
 *
 */


/******************************************************
 *                      Macros
 ******************************************************/

/******************************************************
 *                    Constants
 ******************************************************/


/******************************************************
 *                   Enumerations
 ******************************************************/

/******************************************************
 *                 Type Definitions
 ******************************************************/

/******************************************************
 *                    Structures
 ******************************************************/


/******************************************************
 *               Static Function Declarations
 ******************************************************/


/******************************************************
 *               Variable Definitions
 ******************************************************/


/******************************************************
 *               Function Definitions
 ******************************************************/
#if WICED_PLATFORM_EPA

/**
 * \brief Initialize ePA.
 */
void __attribute__((weak)) wiced_platform_epa_init(void)
{
    return;
}

/**
 * \brief Enable ePA.
 */
void __attribute__((weak)) wiced_platform_epa_enable(void)
{
    return;
}

/**
 * \brief Disable ePA.
 */
void __attribute__((weak)) wiced_platform_epa_disable(void)
{
    return;
}

#endif // WICED_PLATFORM_EPA

/* ----------------- Static Functions ----------------*/
