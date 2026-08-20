# processReply

`_ZN5yaSSL12processReplyERNS_3SSLE`

`yaSSL::processReply(yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0879e390` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879e390  _ZN5yaSSL12processReplyERNS_3SSLE
#           yaSSL::processReply(yaSSL::SSL&)
# range [0x0879e390, 0x0879e419]
0879e390 +0x00:  push   %ebp
0879e391 +0x01:  mov    %esp,%ebp
0879e393 +0x03:  sub    $0x18,%esp
0879e396 +0x06:  mov    %ebx,-0x8(%ebp)
0879e399 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0879e39e +0x0e:  add    $0xbce7fa,%ebx
0879e3a4 +0x14:  mov    %esi,-0x4(%ebp)
0879e3a7 +0x17:  mov    0x8(%ebp),%esi
0879e3aa +0x1a:  mov    %esi,(%esp)
0879e3ad +0x1d:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0879e3b2 +0x22:  test   %eax,%eax
0879e3b4 +0x24:  je     0879e3c0 <+0x30>
0879e3b6 +0x26:  mov    -0x8(%ebp),%ebx
0879e3b9 +0x29:  mov    -0x4(%ebp),%esi
0879e3bc +0x2c:  mov    %ebp,%esp
0879e3be +0x2e:  pop    %ebp
0879e3bf +0x2f:  ret
0879e3c0 +0x30:  mov    %esi,(%esp)
0879e3c3 +0x33:  call   0879de30 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE>  ; yaSSL::DoProcessReply(yaSSL::SSL&)
0879e3c8 +0x38:  test   %eax,%eax
0879e3ca +0x3a:  je     0879e3b6 <+0x26>
0879e3cc +0x3c:  mov    %esi,(%esp)
0879e3cf +0x3f:  call   0874e0a0 <_ZNK5yaSSL3SSL9getSocketEv>  ; yaSSL::SSL::getSocket() const
0879e3d4 +0x44:  mov    %eax,(%esp)
0879e3d7 +0x47:  call   087a1500 <_ZNK5yaSSL6Socket13IsNonBlockingEv>  ; yaSSL::Socket::IsNonBlocking() const
0879e3dc +0x4c:  test   %al,%al
0879e3de +0x4e:  jne    0879e400 <+0x70>
0879e3e0 +0x50:  mov    %esi,(%esp)
0879e3e3 +0x53:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0879e3e8 +0x58:  test   %eax,%eax
0879e3ea +0x5a:  jne    0879e3b6 <+0x26>
0879e3ec +0x5c:  mov    %esi,(%esp)
0879e3ef +0x5f:  call   0879de30 <_ZN5yaSSL14DoProcessReplyERNS_3SSLE>  ; yaSSL::DoProcessReply(yaSSL::SSL&)
0879e3f4 +0x64:  test   %eax,%eax
0879e3f6 +0x66:  jne    0879e3e0 <+0x50>
0879e3f8 +0x68:  jmp    0879e3b6 <+0x26>
0879e3fa +0x6a:  lea    0x0(%esi),%esi
0879e400 +0x70:  movl   $0x50,0x4(%esp)
0879e408 +0x78:  mov    %esi,(%esp)
0879e40b +0x7b:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0879e410 +0x80:  jmp    0879e3b6 <+0x26>
0879e412 +0x82:  lea    0x0(%esi,%eiz,1),%esi
0879e419 +0x89:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::processReply @ 0x879e390

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::processReply(yaSSL::SSL&) */

void yaSSL::processReply(SSL *param_1)

{
  char cVar1;
  int iVar2;
  Socket *this;
  
  iVar2 = SSL::GetError(param_1);
  if ((iVar2 == 0) && (iVar2 = DoProcessReply(param_1), iVar2 != 0)) {
    this = (Socket *)SSL::getSocket(param_1);
    cVar1 = Socket::IsNonBlocking(this);
    if (cVar1 == '\0') {
      do {
        iVar2 = SSL::GetError(param_1);
        if (iVar2 != 0) {
          return;
        }
        iVar2 = DoProcessReply(param_1);
      } while (iVar2 != 0);
    }
    else {
      SSL::SetError(param_1,0x50);
    }
  }
  return;
}
```
