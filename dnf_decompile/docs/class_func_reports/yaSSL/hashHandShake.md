# hashHandShake

`_ZN5yaSSL13hashHandShakeERNS_3SSLERKNS_12input_bufferEj`

`yaSSL::hashHandShake(yaSSL::SSL&, yaSSL::input_buffer const&, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0879ce10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879ce10  _ZN5yaSSL13hashHandShakeERNS_3SSLERKNS_12input_bufferEj
#           yaSSL::hashHandShake(yaSSL::SSL&, yaSSL::input_buffer const&, unsigned int)
# range [0x0879ce10, 0x0879ce9c]
0879ce10 +0x00:  push   %ebp
0879ce11 +0x01:  mov    %esp,%ebp
0879ce13 +0x03:  sub    $0x28,%esp
0879ce16 +0x06:  mov    %ebx,-0xc(%ebp)
0879ce19 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0879ce1e +0x0e:  add    $0xbcfd7a,%ebx
0879ce24 +0x14:  mov    %esi,-0x8(%ebp)
0879ce27 +0x17:  mov    0xc(%ebp),%esi
0879ce2a +0x1a:  mov    %edi,-0x4(%ebp)
0879ce2d +0x1d:  mov    %esi,(%esp)
0879ce30 +0x20:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0879ce35 +0x25:  mov    %esi,(%esp)
0879ce38 +0x28:  mov    %eax,%edi
0879ce3a +0x2a:  call   08796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>  ; yaSSL::input_buffer::get_current() const
0879ce3f +0x2f:  lea    -0x4(%edi,%eax,1),%esi
0879ce43 +0x33:  mov    0x8(%ebp),%eax
0879ce46 +0x36:  mov    0x10(%ebp),%edi
0879ce49 +0x39:  mov    %eax,(%esp)
0879ce4c +0x3c:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879ce51 +0x41:  add    $0x4,%edi
0879ce54 +0x44:  mov    %eax,(%esp)
0879ce57 +0x47:  call   0874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>  ; yaSSL::sslHashes::use_MD5()
0879ce5c +0x4c:  mov    (%eax),%edx
0879ce5e +0x4e:  mov    %edi,0x8(%esp)
0879ce62 +0x52:  mov    %esi,0x4(%esp)
0879ce66 +0x56:  mov    %eax,(%esp)
0879ce69 +0x59:  call   *0x8(%edx)
0879ce6c +0x5c:  mov    0x8(%ebp),%eax
0879ce6f +0x5f:  mov    %eax,(%esp)
0879ce72 +0x62:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879ce77 +0x67:  mov    %eax,(%esp)
0879ce7a +0x6a:  call   0874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>  ; yaSSL::sslHashes::use_SHA()
0879ce7f +0x6f:  mov    (%eax),%edx
0879ce81 +0x71:  mov    %edi,0x8(%esp)
0879ce85 +0x75:  mov    %esi,0x4(%esp)
0879ce89 +0x79:  mov    %eax,(%esp)
0879ce8c +0x7c:  call   *0x8(%edx)
0879ce8f +0x7f:  mov    -0xc(%ebp),%ebx
0879ce92 +0x82:  mov    -0x8(%ebp),%esi
0879ce95 +0x85:  mov    -0x4(%ebp),%edi
0879ce98 +0x88:  mov    %ebp,%esp
0879ce9a +0x8a:  pop    %ebp
0879ce9b +0x8b:  ret
0879ce9c +0x8c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::hashHandShake @ 0x879ce10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::hashHandShake(yaSSL::SSL&, yaSSL::input_buffer const&, unsigned int) */

void yaSSL::hashHandShake(SSL *param_1,input_buffer *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  sslHashes *psVar3;
  int *piVar4;
  
  iVar1 = input_buffer::get_buffer(param_2);
  iVar2 = input_buffer::get_current(param_2);
  iVar2 = iVar1 + -4 + iVar2;
  psVar3 = (sslHashes *)SSL::useHashes(param_1);
  piVar4 = (int *)sslHashes::use_MD5(psVar3);
  (**(code **)(*piVar4 + 8))(piVar4,iVar2,param_3 + 4);
  psVar3 = (sslHashes *)SSL::useHashes(param_1);
  piVar4 = (int *)sslHashes::use_SHA(psVar3);
  (**(code **)(*piVar4 + 8))(piVar4,iVar2,param_3 + 4);
  return;
}
```
