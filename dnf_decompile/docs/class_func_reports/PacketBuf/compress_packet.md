# compress_packet

`_ZN9PacketBuf15compress_packetEv`

`PacketBuf::compress_packet()`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858daa2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858daa2  _ZN9PacketBuf15compress_packetEv
#           PacketBuf::compress_packet()
# range [0x0858daa2, 0x0858dc2d]
0858daa2 +0x000:  push   %ebp
0858daa3 +0x001:  mov    %esp,%ebp
0858daa5 +0x003:  sub    $0x38,%esp
0858daa8 +0x006:  mov    $&_ZGVZN9PacketBuf15compress_packetEvE23compressed_buffer_mutex,%eax
0858daad +0x00b:  movzbl (%eax),%eax
0858dab0 +0x00e:  test   %al,%al
0858dab2 +0x010:  jne    0858dafe <+0x5c>
0858dab4 +0x012:  movl   $&_ZGVZN9PacketBuf15compress_packetEvE23compressed_buffer_mutex,(%esp)
0858dabb +0x019:  call   08725330 <__cxa_guard_acquire>
0858dac0 +0x01e:  test   %eax,%eax
0858dac2 +0x020:  setne  %al
0858dac5 +0x023:  test   %al,%al
0858dac7 +0x025:  je     0858dafe <+0x5c>
0858dac9 +0x027:  movl   $&_ZZN9PacketBuf15compress_packetEvE23compressed_buffer_mutex,(%esp)
0858dad0 +0x02e:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
0858dad5 +0x033:  movl   $&_ZGVZN9PacketBuf15compress_packetEvE23compressed_buffer_mutex,(%esp)
0858dadc +0x03a:  call   08725250 <__cxa_guard_release>
0858dae1 +0x03f:  mov    $&_ZN5MutexD1Ev,%eax
0858dae6 +0x044:  movl   $&__dso_handle,0x8(%esp)
0858daee +0x04c:  movl   $&_ZZN9PacketBuf15compress_packetEvE23compressed_buffer_mutex,0x4(%esp)
0858daf6 +0x054:  mov    %eax,(%esp)
0858daf9 +0x057:  call   0807ddd0 <_init+0x6c8>
0858dafe +0x05c:  mov    0x8(%ebp),%eax
0858db01 +0x05f:  mov    0x8(%eax),%eax
0858db04 +0x062:  sub    $0xf,%eax
0858db07 +0x065:  mov    %eax,-0xc(%ebp)
0858db0a +0x068:  cmpl   $0x0,-0xc(%ebp)
0858db0e +0x06c:  jg     0858db46 <+0xa4>
0858db10 +0x06e:  movl   $"error; compress failed:unexpected message size",0x10(%esp)
0858db18 +0x076:  movl   $0x36e,0xc(%esp)
0858db20 +0x07e:  movl   $&_ZZN9PacketBuf15compress_packetEvE19__PRETTY_FUNCTION__,0x8(%esp)
0858db28 +0x086:  movl   $"packet_buf.cpp",0x4(%esp)
0858db30 +0x08e:  movl   $0x1,(%esp)
0858db37 +0x095:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0858db3c +0x09a:  mov    $0x0,%eax
0858db41 +0x09f:  jmp    0858dc2c <+0x18a>
0858db46 +0x0a4:  mov    -0xc(%ebp),%eax
0858db49 +0x0a7:  add    $0xd,%eax
0858db4c +0x0aa:  mov    %eax,-0x14(%ebp)
0858db4f +0x0ad:  movl   $&_ZZN9PacketBuf15compress_packetEvE23compressed_buffer_mutex,(%esp)
0858db56 +0x0b4:  call   0810539e <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x1d>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x1d
0858db5b +0x0b9:  mov    -0xc(%ebp),%edx
0858db5e +0x0bc:  mov    0x8(%ebp),%eax
0858db61 +0x0bf:  mov    0x14(%eax),%eax
0858db64 +0x0c2:  lea    0xf(%eax),%ecx
0858db67 +0x0c5:  mov    $&_ZZN9PacketBuf15compress_packetEvE17compressed_buffer,%eax
0858db6c +0x0ca:  mov    %edx,0xc(%esp)
0858db70 +0x0ce:  mov    %ecx,0x8(%esp)
0858db74 +0x0d2:  lea    -0x14(%ebp),%edx
0858db77 +0x0d5:  mov    %edx,0x4(%esp)
0858db7b +0x0d9:  mov    %eax,(%esp)
0858db7e +0x0dc:  call   087708d0 <compress>
0858db83 +0x0e1:  mov    %eax,-0x10(%ebp)
0858db86 +0x0e4:  cmpl   $0x0,-0x10(%ebp)
0858db8a +0x0e8:  jne    0858db96 <+0xf4>
0858db8c +0x0ea:  mov    -0x14(%ebp),%eax
0858db8f +0x0ed:  cmp    $&_ZL14gUnicodeBuffer+0xcddd,%eax
0858db94 +0x0f2:  jbe    0858dbdc <+0x13a>
0858db96 +0x0f4:  mov    -0x10(%ebp),%eax
0858db99 +0x0f7:  mov    %eax,0x14(%esp)
0858db9d +0x0fb:  movl   $"error; compress failed:%d",0x10(%esp)
0858dba5 +0x103:  movl   $0x380,0xc(%esp)
0858dbad +0x10b:  movl   $&_ZZN9PacketBuf15compress_packetEvE19__PRETTY_FUNCTION__,0x8(%esp)
0858dbb5 +0x113:  movl   $"packet_buf.cpp",0x4(%esp)
0858dbbd +0x11b:  movl   $0x1,(%esp)
0858dbc4 +0x122:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0858dbc9 +0x127:  movl   $&_ZZN9PacketBuf15compress_packetEvE23compressed_buffer_mutex,(%esp)
0858dbd0 +0x12e:  call   081053b2 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x31>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x31
0858dbd5 +0x133:  mov    $0x0,%eax
0858dbda +0x138:  jmp    0858dc2c <+0x18a>
0858dbdc +0x13a:  mov    -0x14(%ebp),%eax
0858dbdf +0x13d:  mov    0x8(%ebp),%edx
0858dbe2 +0x140:  mov    0x14(%edx),%edx
0858dbe5 +0x143:  add    $0xf,%edx
0858dbe8 +0x146:  mov    %eax,0x8(%esp)
0858dbec +0x14a:  movl   $&_ZZN9PacketBuf15compress_packetEvE17compressed_buffer,0x4(%esp)
0858dbf4 +0x152:  mov    %edx,(%esp)
0858dbf7 +0x155:  call   0807d8a0 <_init+0x198>
0858dbfc +0x15a:  movl   $&_ZZN9PacketBuf15compress_packetEvE23compressed_buffer_mutex,(%esp)
0858dc03 +0x161:  call   081053b2 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0x31>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0x31
0858dc08 +0x166:  mov    -0x14(%ebp),%eax
0858dc0b +0x169:  add    $0xf,%eax
0858dc0e +0x16c:  mov    %eax,%edx
0858dc10 +0x16e:  mov    0x8(%ebp),%eax
0858dc13 +0x171:  mov    %edx,0x8(%eax)
0858dc16 +0x174:  mov    0x8(%ebp),%eax
0858dc19 +0x177:  mov    0x14(%eax),%eax
0858dc1c +0x17a:  lea    0x3(%eax),%edx
0858dc1f +0x17d:  mov    0x8(%ebp),%eax
0858dc22 +0x180:  mov    0x8(%eax),%eax
0858dc25 +0x183:  mov    %eax,(%edx)
0858dc27 +0x185:  mov    $0x1,%eax
0858dc2c +0x18a:  leave
0858dc2d +0x18b:  ret
```

## 反编译 C

```c
// PacketBuf::compress_packet @ 0x858daa2

/* PacketBuf::compress_packet() */

undefined4 __thiscall PacketBuf::compress_packet(PacketBuf *this)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  int local_14;
  int local_10;
  
  if (compress_packet()::compressed_buffer_mutex == '\0') {
    iVar1 = __cxa_guard_acquire(&compress_packet()::compressed_buffer_mutex);
    if (iVar1 != 0) {
      Mutex::Mutex((Mutex *)compress_packet()::compressed_buffer_mutex);
      __cxa_guard_release(&compress_packet()::compressed_buffer_mutex);
      __cxa_atexit(Mutex::~Mutex,compress_packet()::compressed_buffer_mutex,&__dso_handle);
    }
  }
  local_10 = *(int *)(this + 8) + -0xf;
  if (local_10 < 1) {
    LogManager::logFormat
              (1,"packet_buf.cpp","bool PacketBuf::compress_packet()",0x36e,
               "error; compress failed:unexpected message size");
    uVar2 = 0;
  }
  else {
    local_18 = *(int *)(this + 8) - 2;
    Mutex::lock((Mutex *)compress_packet()::compressed_buffer_mutex);
    local_14 = compress(compress_packet()::compressed_buffer,&local_18,*(int *)(this + 0x14) + 0xf,
                        local_10);
    if ((local_14 == 0) && (local_18 < 0x1730a)) {
      memcpy((void *)(*(int *)(this + 0x14) + 0xf),compress_packet()::compressed_buffer,local_18);
      Mutex::unlock((Mutex *)compress_packet()::compressed_buffer_mutex);
      *(uint *)(this + 8) = local_18 + 0xf;
      *(undefined4 *)(*(int *)(this + 0x14) + 3) = *(undefined4 *)(this + 8);
      uVar2 = 1;
    }
    else {
      LogManager::logFormat
                (1,"packet_buf.cpp","bool PacketBuf::compress_packet()",0x380,
                 "error; compress failed:%d",local_14);
      Mutex::unlock((Mutex *)compress_packet()::compressed_buffer_mutex);
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
