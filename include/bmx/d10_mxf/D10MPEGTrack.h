/*
 * Copyright (C) 2011, British Broadcasting Corporation
 * All Rights Reserved.
 *
 * Author: Philip de Nier
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the British Broadcasting Corporation nor the names
 *       of its contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __BMX_D10_MPEG_TRACK_H__
#define __BMX_D10_MPEG_TRACK_H__

#include <bmx/d10_mxf/D10Track.h>
#include <bmx/mxf_helper/D10MXFDescriptorHelper.h>



namespace bmx
{


class D10MPEGTrack : public D10Track
{
public:
    D10MPEGTrack(D10File *file, uint32_t track_index, mxfRational frame_rate, EssenceType essence_type);
    virtual ~D10MPEGTrack();

    virtual void SetOutputTrackNumber(uint32_t track_number);

public:
    void SetAspectRatio(mxfRational aspect_ratio);                  // default 16/9
    void SetSampleSize(uint32_t size, bool remove_excess_padding);  // default max sample size
    void SetAFD(uint8_t afd);                                       // default not set

public:
    mxfpp::FileDescriptor* CreateFileDescriptor(mxfpp::HeaderMetadata *header_metadata);

protected:
    virtual void PrepareWrite();
    virtual void WriteSamplesInt(const unsigned char *data, uint32_t size, uint32_t num_samples);

private:
    D10MXFDescriptorHelper *mD10DescriptorHelper;
    uint32_t mInputSampleSize;
    bool mRemoveExcessPadding;
};


};



#endif

