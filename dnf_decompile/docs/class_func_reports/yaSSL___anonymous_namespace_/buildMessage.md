# buildMessage

`_ZN5yaSSL12_GLOBAL__N_112buildMessageERNS_3SSLERNS_13output_bufferERKNS_7MessageE`

`yaSSL::(anonymous namespace)::buildMessage(yaSSL::SSL&, yaSSL::output_buffer&, yaSSL::Message const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::(anonymous namespace)` | `0x0879f580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879f580  _ZN5yaSSL12_GLOBAL__N_112buildMessageERNS_3SSLERNS_13output_bufferERKNS_7MessageE
#           yaSSL::(anonymous namespace)::buildMessage(yaSSL::SSL&, yaSSL::output_buffer&, yaSSL::Message const&)
# range [0x0879f580, 0x0879f9b9]
0879f580 +0x000:  push   %ebp
0879f581 +0x001:  mov    %esp,%ebp
0879f583 +0x003:  push   %edi
0879f584 +0x004:  push   %esi
0879f585 +0x005:  mov    %edx,%esi
0879f587 +0x007:  push   %ebx
0879f588 +0x008:  call   08722df8 <__i686.get_pc_thunk.bx>
0879f58d +0x00d:  add    $0xbcd60b,%ebx
0879f593 +0x013:  sub    $0x8c,%esp
0879f599 +0x019:  mov    0x8(%ebp),%edi
0879f59c +0x01c:  mov    %eax,-0x60(%ebp)
0879f59f +0x01f:  mov    %eax,(%esp)
0879f5a2 +0x022:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0879f5a7 +0x027:  mov    %eax,(%esp)
0879f5aa +0x02a:  call   0874e750 <_ZNK5yaSSL6Crypto10get_digestEv>  ; yaSSL::Crypto::get_digest() const
0879f5af +0x02f:  mov    (%eax),%edx
0879f5b1 +0x031:  mov    %eax,(%esp)
0879f5b4 +0x034:  call   *0xc(%edx)
0879f5b7 +0x037:  mov    %eax,-0x64(%ebp)
0879f5ba +0x03a:  mov    (%edi),%eax
0879f5bc +0x03c:  mov    %edi,(%esp)
0879f5bf +0x03f:  call   *0x10(%eax)
0879f5c2 +0x042:  mov    -0x64(%ebp),%edx
0879f5c5 +0x045:  mov    -0x60(%ebp),%ecx
0879f5c8 +0x048:  mov    %ecx,(%esp)
0879f5cb +0x04b:  movzwl %ax,%eax
0879f5ce +0x04e:  lea    0x5(%edx,%eax,1),%eax
0879f5d2 +0x052:  mov    %eax,-0x5c(%ebp)
0879f5d5 +0x055:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0879f5da +0x05a:  mov    %eax,(%esp)
0879f5dd +0x05d:  call   0874e760 <_ZNK5yaSSL6Crypto10get_cipherEv>  ; yaSSL::Crypto::get_cipher() const
0879f5e2 +0x062:  mov    (%eax),%edx
0879f5e4 +0x064:  mov    %eax,(%esp)
0879f5e7 +0x067:  call   *0x10(%edx)
0879f5ea +0x06a:  mov    %eax,-0x6c(%ebp)
0879f5ed +0x06d:  mov    -0x60(%ebp),%eax
0879f5f0 +0x070:  mov    %eax,(%esp)
0879f5f3 +0x073:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879f5f8 +0x078:  mov    %eax,(%esp)
0879f5fb +0x07b:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0879f600 +0x080:  movl   $0x0,-0x70(%ebp)
0879f607 +0x087:  cmpl   $0x1,0x8(%eax)
0879f60b +0x08b:  je     0879f978 <+0x3f8>
0879f611 +0x091:  lea    -0x1c(%ebp),%eax
0879f614 +0x094:  mov    %eax,(%esp)
0879f617 +0x097:  movl   $0x0,0x8(%esp)
0879f61f +0x09f:  movl   $0x3,0x4(%esp)
0879f627 +0x0a7:  call   08746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>  ; yaSSL::ProtocolVersion::ProtocolVersion(unsigned char, unsigned char)
0879f62c +0x0ac:  mov    -0x60(%ebp),%edx
0879f62f +0x0af:  mov    %edx,(%esp)
0879f632 +0x0b2:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879f637 +0x0b7:  mov    %eax,(%esp)
0879f63a +0x0ba:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0879f63f +0x0bf:  movzbl 0x12f(%eax),%ecx
0879f646 +0x0c6:  movzbl 0x12e(%eax),%edx
0879f64d +0x0cd:  mov    (%edi),%eax
0879f64f +0x0cf:  mov    %edi,(%esp)
0879f652 +0x0d2:  mov    %cl,-0x78(%ebp)
0879f655 +0x0d5:  mov    %dl,-0x74(%ebp)
0879f658 +0x0d8:  call   *0xc(%eax)
0879f65b +0x0db:  movzbl -0x74(%ebp),%edx
0879f65f +0x0df:  movzbl -0x78(%ebp),%ecx
0879f663 +0x0e3:  mov    %dl,-0x1c(%ebp)
0879f666 +0x0e6:  mov    %cl,-0x1b(%ebp)
0879f669 +0x0e9:  mov    %eax,-0x20(%ebp)
0879f66c +0x0ec:  mov    (%edi),%eax
0879f66e +0x0ee:  mov    %edi,(%esp)
0879f671 +0x0f1:  call   *0x10(%eax)
0879f674 +0x0f4:  movzwl -0x5c(%ebp),%eax
0879f678 +0x0f8:  lea    -0x30(%ebp),%ecx
0879f67b +0x0fb:  mov    %ecx,-0x68(%ebp)
0879f67e +0x0fe:  mov    %ecx,(%esp)
0879f681 +0x101:  sub    $0x5,%eax
0879f684 +0x104:  mov    %ax,-0x1a(%ebp)
0879f688 +0x108:  call   08796d00 <_ZN5yaSSL12input_bufferC1Ev>  ; yaSSL::input_buffer::input_buffer()
0879f68d +0x10d:  mov    -0x60(%ebp),%eax
0879f690 +0x110:  mov    %eax,(%esp)
0879f693 +0x113:  call   0874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>  ; yaSSL::SSL::isTLSv1_1() const
0879f698 +0x118:  test   %al,%al
0879f69a +0x11a:  jne    0879f8f8 <+0x378>
0879f6a0 +0x120:  mov    -0x68(%ebp),%ecx
0879f6a3 +0x123:  mov    %ecx,(%esp)
0879f6a6 +0x126:  call   08796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>  ; yaSSL::input_buffer::get_size() const
0879f6ab +0x12b:  mov    %esi,(%esp)
0879f6ae +0x12e:  mov    %eax,-0x6c(%ebp)
0879f6b1 +0x131:  mov    -0x5c(%ebp),%eax
0879f6b4 +0x134:  mov    %eax,0x4(%esp)
0879f6b8 +0x138:  call   08797120 <_ZN5yaSSL13output_buffer8allocateEj>  ; yaSSL::output_buffer::allocate(unsigned int)
0879f6bd +0x13d:  lea    -0x20(%ebp),%eax
0879f6c0 +0x140:  mov    %eax,0x4(%esp)
0879f6c4 +0x144:  mov    %esi,(%esp)
0879f6c7 +0x147:  call   08749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::RecordLayerHeader const&)
0879f6cc +0x14c:  mov    -0x68(%ebp),%edx
0879f6cf +0x14f:  mov    %edx,(%esp)
0879f6d2 +0x152:  mov    %eax,-0x5c(%ebp)
0879f6d5 +0x155:  call   08796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>  ; yaSSL::input_buffer::get_size() const
0879f6da +0x15a:  mov    -0x68(%ebp),%ecx
0879f6dd +0x15d:  mov    %ecx,(%esp)
0879f6e0 +0x160:  mov    %eax,-0x74(%ebp)
0879f6e3 +0x163:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0879f6e8 +0x168:  mov    -0x74(%ebp),%edx
0879f6eb +0x16b:  mov    %edx,0x8(%esp)
0879f6ef +0x16f:  mov    %eax,0x4(%esp)
0879f6f3 +0x173:  mov    -0x5c(%ebp),%eax
0879f6f6 +0x176:  mov    %eax,(%esp)
0879f6f9 +0x179:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0879f6fe +0x17e:  mov    -0x5c(%ebp),%edx
0879f701 +0x181:  mov    %edi,0x4(%esp)
0879f705 +0x185:  mov    %edx,(%esp)
0879f708 +0x188:  call   08746a50 <_ZN5yaSSLlsERNS_13output_bufferERKNS_7MessageE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::Message const&)
0879f70d +0x18d:  mov    -0x60(%ebp),%ecx
0879f710 +0x190:  mov    %ecx,(%esp)
0879f713 +0x193:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
0879f718 +0x198:  test   %al,%al
0879f71a +0x19a:  je     0879f868 <+0x2e8>
0879f720 +0x1a0:  mov    (%edi),%eax
0879f722 +0x1a2:  mov    %edi,(%esp)
0879f725 +0x1a5:  call   *0xc(%eax)
0879f728 +0x1a8:  mov    %esi,(%esp)
0879f72b +0x1ab:  mov    %eax,%edi
0879f72d +0x1ad:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
0879f732 +0x1b2:  mov    %esi,(%esp)
0879f735 +0x1b5:  mov    %eax,-0x74(%ebp)
0879f738 +0x1b8:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
0879f73d +0x1bd:  mov    -0x74(%ebp),%edx
0879f740 +0x1c0:  sub    -0x6c(%ebp),%edx
0879f743 +0x1c3:  mov    -0x60(%ebp),%ecx
0879f746 +0x1c6:  mov    %edi,0x10(%esp)
0879f74a +0x1ca:  lea    -0x54(%ebp),%edi
0879f74d +0x1cd:  sub    $0x5,%edx
0879f750 +0x1d0:  mov    %edx,0xc(%esp)
0879f754 +0x1d4:  mov    -0x6c(%ebp),%edx
0879f757 +0x1d7:  movl   $0x0,0x14(%esp)
0879f75f +0x1df:  mov    %edi,0x4(%esp)
0879f763 +0x1e3:  mov    %ecx,(%esp)
0879f766 +0x1e6:  lea    0x5(%eax,%edx,1),%eax
0879f76a +0x1ea:  mov    %eax,0x8(%esp)
0879f76e +0x1ee:  call   0879f370 <_ZN5yaSSL8TLS_hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb>  ; yaSSL::TLS_hmac(yaSSL::SSL&, unsigned char*, unsigned char const*, unsigned int, yaSSL::ContentType, bool)
0879f773 +0x1f3:  mov    -0x64(%ebp),%edx
0879f776 +0x1f6:  mov    %edi,0x4(%esp)
0879f77a +0x1fa:  mov    %esi,(%esp)
0879f77d +0x1fd:  mov    %edx,0x8(%esp)
0879f781 +0x201:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0879f786 +0x206:  mov    -0x60(%ebp),%ecx
0879f789 +0x209:  mov    %ecx,(%esp)
0879f78c +0x20c:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879f791 +0x211:  mov    %eax,(%esp)
0879f794 +0x214:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0879f799 +0x219:  cmpl   $0x1,0x8(%eax)
0879f79d +0x21d:  je     0879f8c0 <+0x340>
0879f7a3 +0x223:  movzwl -0x1a(%ebp),%eax
0879f7a7 +0x227:  lea    -0x40(%ebp),%edi
0879f7aa +0x22a:  mov    %edi,(%esp)
0879f7ad +0x22d:  mov    %eax,0x4(%esp)
0879f7b1 +0x231:  call   087972e0 <_ZN5yaSSL12input_bufferC1Ej>  ; yaSSL::input_buffer::input_buffer(unsigned int)
0879f7b6 +0x236:  mov    -0x60(%ebp),%eax
0879f7b9 +0x239:  mov    %eax,(%esp)
0879f7bc +0x23c:  call   0874e2b0 <_ZN5yaSSL3SSL9useCryptoEv>  ; yaSSL::SSL::useCrypto()
0879f7c1 +0x241:  mov    %eax,(%esp)
0879f7c4 +0x244:  call   0874e7b0 <_ZN5yaSSL6Crypto10use_cipherEv>  ; yaSSL::Crypto::use_cipher()
0879f7c9 +0x249:  mov    %eax,%edx
0879f7cb +0x24b:  mov    (%eax),%eax
0879f7cd +0x24d:  mov    %edx,-0x74(%ebp)
0879f7d0 +0x250:  mov    (%eax),%eax
0879f7d2 +0x252:  mov    %esi,(%esp)
0879f7d5 +0x255:  mov    %eax,-0x64(%ebp)
0879f7d8 +0x258:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
0879f7dd +0x25d:  mov    %esi,(%esp)
0879f7e0 +0x260:  mov    %eax,-0x5c(%ebp)
0879f7e3 +0x263:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
0879f7e8 +0x268:  mov    %edi,(%esp)
0879f7eb +0x26b:  mov    %eax,-0x60(%ebp)
0879f7ee +0x26e:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0879f7f3 +0x273:  mov    -0x5c(%ebp),%ecx
0879f7f6 +0x276:  mov    -0x74(%ebp),%edx
0879f7f9 +0x279:  sub    $0x5,%ecx
0879f7fc +0x27c:  mov    %ecx,0xc(%esp)
0879f800 +0x280:  mov    -0x60(%ebp),%ecx
0879f803 +0x283:  mov    %edx,(%esp)
0879f806 +0x286:  mov    %eax,0x4(%esp)
0879f80a +0x28a:  add    $0x5,%ecx
0879f80d +0x28d:  mov    %ecx,0x8(%esp)
0879f811 +0x291:  call   *-0x64(%ebp)
0879f814 +0x294:  mov    %esi,(%esp)
0879f817 +0x297:  movl   $0x5,0x4(%esp)
0879f81f +0x29f:  call   08796ee0 <_ZN5yaSSL13output_buffer11set_currentEj>  ; yaSSL::output_buffer::set_current(unsigned int)
0879f824 +0x2a4:  mov    %edi,(%esp)
0879f827 +0x2a7:  call   08796d40 <_ZNK5yaSSL12input_buffer12get_capacityEv>  ; yaSSL::input_buffer::get_capacity() const
0879f82c +0x2ac:  mov    %edi,(%esp)
0879f82f +0x2af:  mov    %eax,-0x74(%ebp)
0879f832 +0x2b2:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0879f837 +0x2b7:  mov    -0x74(%ebp),%edx
0879f83a +0x2ba:  mov    %esi,(%esp)
0879f83d +0x2bd:  mov    %edx,0x8(%esp)
0879f841 +0x2c1:  mov    %eax,0x4(%esp)
0879f845 +0x2c5:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0879f84a +0x2ca:  mov    %edi,(%esp)
0879f84d +0x2cd:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
0879f852 +0x2d2:  mov    -0x68(%ebp),%edx
0879f855 +0x2d5:  mov    %edx,(%esp)
0879f858 +0x2d8:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
0879f85d +0x2dd:  add    $0x8c,%esp
0879f863 +0x2e3:  pop    %ebx
0879f864 +0x2e4:  pop    %esi
0879f865 +0x2e5:  pop    %edi
0879f866 +0x2e6:  pop    %ebp
0879f867 +0x2e7:  ret
0879f868 +0x2e8:  mov    (%edi),%eax
0879f86a +0x2ea:  mov    %edi,(%esp)
0879f86d +0x2ed:  call   *0xc(%eax)
0879f870 +0x2f0:  mov    %esi,(%esp)
0879f873 +0x2f3:  mov    %eax,%edi
0879f875 +0x2f5:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
0879f87a +0x2fa:  mov    %esi,(%esp)
0879f87d +0x2fd:  mov    %eax,-0x5c(%ebp)
0879f880 +0x300:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
0879f885 +0x305:  mov    -0x5c(%ebp),%edx
0879f888 +0x308:  mov    %edi,0x10(%esp)
0879f88c +0x30c:  lea    -0x54(%ebp),%edi
0879f88f +0x30f:  movl   $0x0,0x14(%esp)
0879f897 +0x317:  mov    %edi,0x4(%esp)
0879f89b +0x31b:  sub    $0x5,%edx
0879f89e +0x31e:  mov    %edx,0xc(%esp)
0879f8a2 +0x322:  add    $0x5,%eax
0879f8a5 +0x325:  mov    %eax,0x8(%esp)
0879f8a9 +0x329:  mov    -0x60(%ebp),%eax
0879f8ac +0x32c:  mov    %eax,(%esp)
0879f8af +0x32f:  call   0879d5d0 <_ZN5yaSSL4hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb>  ; yaSSL::hmac(yaSSL::SSL&, unsigned char*, unsigned char const*, unsigned int, yaSSL::ContentType, bool)
0879f8b4 +0x334:  jmp    0879f773 <+0x1f3>
0879f8b9 +0x339:  lea    0x0(%esi,%eiz,1),%esi
0879f8c0 +0x340:  movzbl -0x70(%ebp),%eax
0879f8c4 +0x344:  xor    %edi,%edi
0879f8c6 +0x346:  mov    %esi,-0x5c(%ebp)
0879f8c9 +0x349:  mov    -0x70(%ebp),%esi
0879f8cc +0x34c:  mov    %al,-0x64(%ebp)
0879f8cf +0x34f:  nop
0879f8d0 +0x350:  mov    -0x5c(%ebp),%edx
0879f8d3 +0x353:  add    $0x1,%edi
0879f8d6 +0x356:  movl   $0xfeedbeef,0x4(%esp)
0879f8de +0x35e:  mov    %edx,(%esp)
0879f8e1 +0x361:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
0879f8e6 +0x366:  movzbl -0x64(%ebp),%ecx
0879f8ea +0x36a:  cmp    %edi,%esi
0879f8ec +0x36c:  mov    %cl,(%eax)
0879f8ee +0x36e:  jae    0879f8d0 <+0x350>
0879f8f0 +0x370:  mov    -0x5c(%ebp),%esi
0879f8f3 +0x373:  jmp    0879f7a3 <+0x223>
0879f8f8 +0x378:  mov    -0x60(%ebp),%edx
0879f8fb +0x37b:  mov    %edx,(%esp)
0879f8fe +0x37e:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879f903 +0x383:  mov    %eax,(%esp)
0879f906 +0x386:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0879f90b +0x38b:  cmpl   $0x1,0x8(%eax)
0879f90f +0x38f:  jne    0879f6a0 <+0x120>
0879f915 +0x395:  mov    -0x6c(%ebp),%ecx
0879f918 +0x398:  mov    -0x68(%ebp),%eax
0879f91b +0x39b:  mov    %ecx,0x4(%esp)
0879f91f +0x39f:  mov    %eax,(%esp)
0879f922 +0x3a2:  call   08797220 <_ZN5yaSSL12input_buffer8allocateEj>  ; yaSSL::input_buffer::allocate(unsigned int)
0879f927 +0x3a7:  mov    -0x68(%ebp),%edx
0879f92a +0x3aa:  mov    %edx,(%esp)
0879f92d +0x3ad:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0879f932 +0x3b2:  mov    -0x60(%ebp),%ecx
0879f935 +0x3b5:  mov    %ecx,(%esp)
0879f938 +0x3b8:  mov    %eax,-0x74(%ebp)
0879f93b +0x3bb:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0879f940 +0x3c0:  mov    %eax,(%esp)
0879f943 +0x3c3:  call   0874e780 <_ZNK5yaSSL6Crypto10get_randomEv>  ; yaSSL::Crypto::get_random() const
0879f948 +0x3c8:  mov    -0x74(%ebp),%edx
0879f94b +0x3cb:  mov    -0x6c(%ebp),%ecx
0879f94e +0x3ce:  mov    %edx,0x4(%esp)
0879f952 +0x3d2:  mov    %ecx,0x8(%esp)
0879f956 +0x3d6:  mov    %eax,(%esp)
0879f959 +0x3d9:  call   08798fc0 <_ZNK5yaSSL10RandomPool4FillEPhj>  ; yaSSL::RandomPool::Fill(unsigned char*, unsigned int) const
0879f95e +0x3de:  mov    -0x6c(%ebp),%eax
0879f961 +0x3e1:  mov    -0x68(%ebp),%edx
0879f964 +0x3e4:  mov    %eax,0x4(%esp)
0879f968 +0x3e8:  mov    %edx,(%esp)
0879f96b +0x3eb:  call   08796d50 <_ZN5yaSSL12input_buffer8add_sizeEj>  ; yaSSL::input_buffer::add_size(unsigned int)
0879f970 +0x3f0:  jmp    0879f6a0 <+0x120>
0879f975 +0x3f5:  lea    0x0(%esi),%esi
0879f978 +0x3f8:  mov    -0x60(%ebp),%edx
0879f97b +0x3fb:  mov    %edx,(%esp)
0879f97e +0x3fe:  call   0874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>  ; yaSSL::SSL::isTLSv1_1() const
0879f983 +0x403:  mov    -0x5c(%ebp),%edx
0879f986 +0x406:  add    -0x6c(%ebp),%edx
0879f989 +0x409:  mov    -0x6c(%ebp),%ecx
0879f98c +0x40c:  test   %al,%al
0879f98e +0x40e:  cmove  -0x5c(%ebp),%edx
0879f992 +0x412:  mov    %edx,%eax
0879f994 +0x414:  mov    %edx,-0x5c(%ebp)
0879f997 +0x417:  sub    $0x4,%eax
0879f99a +0x41a:  xor    %edx,%edx
0879f99c +0x41c:  divl   -0x6c(%ebp)
0879f99f +0x41f:  mov    -0x5c(%ebp),%eax
0879f9a2 +0x422:  sub    %edx,%ecx
0879f9a4 +0x424:  lea    0x1(%ecx,%eax,1),%eax
0879f9a8 +0x428:  mov    %ecx,-0x70(%ebp)
0879f9ab +0x42b:  mov    %eax,-0x5c(%ebp)
0879f9ae +0x42e:  jmp    0879f611 <+0x91>
0879f9b3 +0x433:  lea    0x0(%esi),%esi
0879f9b9 +0x439:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// buildMessage @ 0x879f580

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::(anonymous namespace)::buildMessage(yaSSL::SSL&, yaSSL::output_buffer&, yaSSL::Message
   const&) */

void __regparm2
yaSSL::(anonymous_namespace)::buildMessage(SSL *param_1,output_buffer *param_2,Message *param_3)

{
  undefined1 uVar1;
  ProtocolVersion PVar2;
  code *pcVar3;
  char cVar4;
  Crypto *pCVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  Security *pSVar9;
  int iVar10;
  output_buffer *this;
  uchar *puVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  RandomPool *this_00;
  uint uVar17;
  uint local_74;
  uint local_60;
  uchar local_58 [20];
  input_buffer local_44 [16];
  input_buffer local_34 [16];
  undefined4 local_24;
  ProtocolVersion local_20;
  undefined1 local_1f;
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x879f58d;
  pCVar5 = (Crypto *)SSL::getCrypto(param_1);
  piVar6 = (int *)Crypto::get_digest(pCVar5);
  uVar7 = (**(code **)(*piVar6 + 0xc))(piVar6);
  uVar8 = (**(code **)(*(int *)param_3 + 0x10))(param_3);
  local_60 = uVar7 + 5 + (uVar8 & 0xffff);
  pCVar5 = (Crypto *)SSL::getCrypto(param_1);
  piVar6 = (int *)Crypto::get_cipher(pCVar5);
  uVar8 = (**(code **)(*piVar6 + 0x10))(piVar6);
  pSVar9 = (Security *)SSL::getSecurity(param_1);
  iVar10 = Security::get_parms(pSVar9);
  local_74 = 0;
  if (*(int *)(iVar10 + 8) == 1) {
    cVar4 = SSL::isTLSv1_1(param_1);
    uVar17 = local_60 + uVar8;
    if (cVar4 == '\0') {
      uVar17 = local_60;
    }
    local_74 = uVar8 - (uVar17 - 4) % uVar8;
    local_60 = local_74 + 1 + uVar17;
  }
  ProtocolVersion::ProtocolVersion(&local_20,'\x03','\0');
  pSVar9 = (Security *)SSL::getSecurity(param_1);
  iVar10 = Security::get_connection(pSVar9);
  uVar1 = *(undefined1 *)(iVar10 + 0x12f);
  PVar2 = *(ProtocolVersion *)(iVar10 + 0x12e);
  local_24 = (**(code **)(*(int *)param_3 + 0xc))(param_3);
  local_20 = PVar2;
  local_1f = uVar1;
  (**(code **)(*(int *)param_3 + 0x10))(param_3);
  local_1e = (short)local_60 - 5;
  input_buffer::input_buffer(local_34);
  cVar4 = SSL::isTLSv1_1(param_1);
  if (cVar4 != '\0') {
    pSVar9 = (Security *)SSL::getSecurity(param_1);
    iVar10 = Security::get_parms(pSVar9);
    if (*(int *)(iVar10 + 8) == 1) {
      input_buffer::allocate(local_34,uVar8);
      puVar11 = (uchar *)input_buffer::get_buffer(local_34);
      pCVar5 = (Crypto *)SSL::getCrypto(param_1);
      this_00 = (RandomPool *)Crypto::get_random(pCVar5);
      RandomPool::Fill(this_00,puVar11,uVar8);
      input_buffer::add_size(local_34,uVar8);
    }
  }
  iVar10 = input_buffer::get_size(local_34);
  output_buffer::allocate(param_2,local_60);
  this = (output_buffer *)yaSSL::operator<<(param_2,(RecordLayerHeader *)&local_24);
  uVar8 = input_buffer::get_size(local_34);
  puVar11 = (uchar *)input_buffer::get_buffer(local_34);
  output_buffer::write(this,puVar11,uVar8);
  yaSSL::operator<<(this,param_3);
  cVar4 = SSL::isTLS(param_1);
  if (cVar4 == '\0') {
    uVar12 = (**(code **)(*(int *)param_3 + 0xc))(param_3);
    iVar10 = output_buffer::get_size(param_2);
    iVar13 = output_buffer::get_buffer(param_2);
    hmac(param_1,local_58,iVar13 + 5,iVar10 + -5,uVar12,0);
  }
  else {
    uVar12 = (**(code **)(*(int *)param_3 + 0xc))(param_3);
    iVar13 = output_buffer::get_size(param_2);
    iVar14 = output_buffer::get_buffer(param_2);
    TLS_hmac(param_1,local_58,iVar14 + 5 + iVar10,(iVar13 - iVar10) + -5,uVar12,0);
  }
  output_buffer::write(param_2,local_58,uVar7);
  pSVar9 = (Security *)SSL::getSecurity(param_1);
  iVar10 = Security::get_parms(pSVar9);
  if (*(int *)(iVar10 + 8) == 1) {
    uVar7 = 0;
    do {
      uVar7 = uVar7 + 1;
      puVar16 = (undefined1 *)output_buffer::operator[]((uint)param_2);
      *puVar16 = (undefined1)local_74;
    } while (uVar7 <= local_74);
  }
  input_buffer::input_buffer(local_44,(uint)local_1e);
  pCVar5 = (Crypto *)SSL::useCrypto(param_1);
  puVar15 = (undefined4 *)Crypto::use_cipher(pCVar5);
  pcVar3 = *(code **)*puVar15;
  iVar10 = output_buffer::get_size(param_2);
  iVar13 = output_buffer::get_buffer(param_2);
  uVar12 = input_buffer::get_buffer(local_44);
  (*pcVar3)(puVar15,uVar12,iVar13 + 5,iVar10 + -5);
  output_buffer::set_current(param_2,5);
  uVar7 = input_buffer::get_capacity(local_44);
  puVar11 = (uchar *)input_buffer::get_buffer(local_44);
  output_buffer::write(param_2,puVar11,uVar7);
  input_buffer::~input_buffer(local_44);
  input_buffer::~input_buffer(local_34);
  return;
}
```
