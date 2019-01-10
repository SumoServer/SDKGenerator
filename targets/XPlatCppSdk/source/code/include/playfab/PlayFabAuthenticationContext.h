#pragma once

#include <string>

namespace PlayFab
{
    /// <summary>
    /// Container for PlayFab authentication credentials data.
    /// </summary>
    struct PlayFabAuthenticationContext
    {
        std::string clientSessionTicket; // Client session ticket that is used as an authentication token in many PlayFab API methods.
        std::string entityToken; // User's entity token. Entity tokens are required by all Entity API methods.
        std::string developerSecretKey; // Developer secret key. These keys can be used in development environments.

        void ForgetAllCredentials()
        {
            clientSessionTicket.clear();
            entityToken.clear();
            developerSecretKey.clear();
        }
    };
}