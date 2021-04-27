/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * Windows Client
 *
 * Copyright 2009-2011 Jay Sorg
 * Copyright 2010-2011 Vic Lee
 * Copyright 2010-2011 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Myrtille: A native HTML4/5 Remote Desktop Protocol client
 *
 * Copyright(c) 2014-2021 Cedric Coste
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *	http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma region Myrtille

#ifdef __cplusplus
extern "C" {
#endif

void wf_myrtille_start(wfContext* wfc);
void wf_myrtille_stop(wfContext* wfc);
HANDLE wf_myrtille_connect(wfContext* wfc);
void wf_myrtille_send_screen(wfContext* wfc, bool adaptive);
void wf_myrtille_send_region(wfContext* wfc, RECT region);
void wf_myrtille_send_cursor(wfContext* wfc);
void wf_myrtille_read_client_clipboard(wfContext* wfc, const wchar_t** text, size_t* size);
void wf_myrtille_read_server_clipboard(wfContext* wfc);
void wf_myrtille_send_server_clipboard(wfContext* wfc, BYTE* data, size_t size);
void wf_myrtille_send_printjob(wfContext* wfc, wchar_t* printJobName);
void wf_myrtille_send_audio(wfContext* wfc, const BYTE* data, size_t size);

#ifdef __cplusplus
}
#endif

#pragma endregion