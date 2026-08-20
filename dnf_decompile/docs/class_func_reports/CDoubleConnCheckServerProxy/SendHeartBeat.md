# SendHeartBeat

`_ZN27CDoubleConnCheckServerProxy13SendHeartBeatEii`

`CDoubleConnCheckServerProxy::SendHeartBeat(int, int)`

| 类 | 地址 |
|---|---|
| `CDoubleConnCheckServerProxy` | `0x0846d3ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846d3ae  _ZN27CDoubleConnCheckServerProxy13SendHeartBeatEii
#           CDoubleConnCheckServerProxy::SendHeartBeat(int, int)
# range [0x0846d3ae, 0x0846d411]
0846d3ae +0x00:  push   %ebp
0846d3af +0x01:  mov    %esp,%ebp
0846d3b1 +0x03:  push   %ebx
0846d3b2 +0x04:  sub    $0x34,%esp
0846d3b5 +0x07:  lea    -0x14(%ebp),%eax
0846d3b8 +0x0a:  mov    %eax,(%esp)
0846d3bb +0x0d:  call   0846d602 <_GLOBAL__I__ZN27CDoubleConnCheckServerProxyC2ESsi+0x94>  ; global constructors keyed to CDoubleConnCheckServerProxy::CDoubleConnCheckServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x94
0846d3c0 +0x12:  movl   $0x3e8,-0xe(%ebp)
0846d3c7 +0x19:  mov    0xc(%ebp),%eax
0846d3ca +0x1c:  mov    %al,-0xa(%ebp)
0846d3cd +0x1f:  mov    0x10(%ebp),%eax
0846d3d0 +0x22:  mov    %al,-0x9(%ebp)
0846d3d3 +0x25:  mov    0x8(%ebp),%eax
0846d3d6 +0x28:  mov    %eax,(%esp)
0846d3d9 +0x2b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0846d3de +0x30:  mov    0x8(%ebp),%edx
0846d3e1 +0x33:  mov    0x4(%edx),%edx
0846d3e4 +0x36:  movzwl %dx,%ecx
0846d3e7 +0x39:  lea    -0x14(%ebp),%edx
0846d3ea +0x3c:  mov    0x8(%ebp),%ebx
0846d3ed +0x3f:  add    $0x8,%ebx
0846d3f0 +0x42:  mov    %eax,0x10(%esp)
0846d3f4 +0x46:  mov    %ecx,0xc(%esp)
0846d3f8 +0x4a:  movl   $0xc,0x8(%esp)
0846d400 +0x52:  mov    %edx,0x4(%esp)
0846d404 +0x56:  mov    %ebx,(%esp)
0846d407 +0x59:  call   08483b68 <_ZNK11CUdpHandler12SendToServerEPcitPKc>  ; CUdpHandler::SendToServer(char*, int, unsigned short, char const*) const
0846d40c +0x5e:  add    $0x34,%esp
0846d40f +0x61:  pop    %ebx
0846d410 +0x62:  pop    %ebp
0846d411 +0x63:  ret
```

## 反编译 C

```c
// CDoubleConnCheckServerProxy::SendHeartBeat @ 0x846d3ae

/* CDoubleConnCheckServerProxy::SendHeartBeat(int, int) */

void __thiscall
CDoubleConnCheckServerProxy::SendHeartBeat
          (CDoubleConnCheckServerProxy *this,int param_1,int param_2)

{
  char *pcVar1;
  Packet_Double_Check_Server_UDP_HeartBeat local_18 [6];
  undefined4 local_12;
  undefined1 local_e;
  undefined1 local_d;
  
  Packet_Double_Check_Server_UDP_HeartBeat::Packet_Double_Check_Server_UDP_HeartBeat(local_18);
  local_12 = 1000;
  local_e = (undefined1)param_1;
  local_d = (undefined1)param_2;
  pcVar1 = (char *)std::string::c_str((string *)this);
  CUdpHandler::SendToServer
            ((CUdpHandler *)(this + 8),(char *)local_18,0xc,(ushort)*(undefined4 *)(this + 4),pcVar1
            );
  return;
}
```
