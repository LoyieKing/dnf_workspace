# Send

`_ZN5yaSSL3SSL4SendEPKhj`

`yaSSL::SSL::Send(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874f9a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874f9a0  _ZN5yaSSL3SSL4SendEPKhj
#           yaSSL::SSL::Send(unsigned char const*, unsigned int)
# range [0x0874f9a0, 0x0874fa09]
0874f9a0 +0x00:  push   %ebp
0874f9a1 +0x01:  mov    %esp,%ebp
0874f9a3 +0x03:  sub    $0x28,%esp
0874f9a6 +0x06:  mov    %ebx,-0xc(%ebp)
0874f9a9 +0x09:  mov    0xc(%ebp),%eax
0874f9ac +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
0874f9b1 +0x11:  add    $0xc1d1e7,%ebx
0874f9b7 +0x17:  mov    %edi,-0x4(%ebp)
0874f9ba +0x1a:  mov    0x8(%ebp),%edi
0874f9bd +0x1d:  mov    %esi,-0x8(%ebp)
0874f9c0 +0x20:  mov    0x10(%ebp),%esi
0874f9c3 +0x23:  mov    %eax,0x4(%esp)
0874f9c7 +0x27:  movl   $0x0,0xc(%esp)
0874f9cf +0x2f:  lea    0x9b8(%edi),%eax
0874f9d5 +0x35:  mov    %esi,0x8(%esp)
0874f9d9 +0x39:  mov    %eax,(%esp)
0874f9dc +0x3c:  call   087a1650 <_ZNK5yaSSL6Socket4sendEPKhji>  ; yaSSL::Socket::send(unsigned char const*, unsigned int, int) const
0874f9e1 +0x41:  cmp    %eax,%esi
0874f9e3 +0x43:  je     0874f9f5 <+0x55>
0874f9e5 +0x45:  movl   $0x71,0x4(%esp)
0874f9ed +0x4d:  mov    %edi,(%esp)
0874f9f0 +0x50:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0874f9f5 +0x55:  mov    -0xc(%ebp),%ebx
0874f9f8 +0x58:  mov    -0x8(%ebp),%esi
0874f9fb +0x5b:  mov    -0x4(%ebp),%edi
0874f9fe +0x5e:  mov    %ebp,%esp
0874fa00 +0x60:  pop    %ebp
0874fa01 +0x61:  ret
0874fa02 +0x62:  lea    0x0(%esi,%eiz,1),%esi
0874fa09 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL::Send @ 0x874f9a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::Send(unsigned char const*, unsigned int) */

void __thiscall yaSSL::SSL::Send(SSL *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = Socket::send((Socket *)(this + 0x9b8),param_1,param_2,0);
  if (param_2 != uVar1) {
    SetError(this,0x71);
  }
  return;
}
```
