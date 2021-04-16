# TEST PLAN:

## Table: High-level Test Plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Status** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H01 | Encrypt Message using Caesar Cipher | (1) Plain text message (2) Encryption key| Cipher text | PASS | Requirement based|
|  H02 | Encrypt Message using Vigenere Cipher | (1) Plain text message (2) Encryption keyword| Cipher text | PASS | Requirement based|


## Table: Low-Level Test Plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Status** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  CCL01       | H01 |Encrypt Messaage with only upper case characters| (1) Plain text message (2) Encryption key| Cipher | SUCCESS |Scenario based |
|  CCL02       | H01 |Encrypt Messaage with only lower case characters| (1) Plain text message (2) Encryption key| Cipher | SUCCESS |Scenario based |
|  CCL03       | H01 |Encrypt Messaage with both upper and lower case characters| (1) Plain text message (2) Encryption key| Cipher | SUCCESS |Scenario based |
|  CCL04       | H01 |Encrypt Messaage with special characters| (1) Plain text message (2) Encryption key| Cipher | SUCCESS |Scenario based |
|  CCL05       | H01 |Encrypt Messaage with key value greater than 26| (1) Plain text message (2) Encryption key| Cipher | SUCCESS |Scenario based |
|  VCL01       | H02 |Encrypt Messaage with both upper and lower case characters| (1) Plain text message (2) Encryption keyword| Cipher | SUCCESS |Scenario based |
|  VCL02       | H02 |Encrypt Messaage with spaces| (1) Plain text message (2) Encryption keyword| Cipher | SUCCESS |Scenario based |
|  VCL03       | H02 |Encrypt Messaage with keyword longer than message| (1) Plain text message (2) Encryption keyword| Redirect to menu | SUCCESS |Scenario based |

*CCL - Caesar Cipher Low level

*VCL - Vigenere cipher Low level
