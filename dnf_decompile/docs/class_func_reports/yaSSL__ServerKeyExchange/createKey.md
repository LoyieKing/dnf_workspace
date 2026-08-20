# createKey

`_ZN5yaSSL17ServerKeyExchange9createKeyERNS_3SSLE`

`yaSSL::ServerKeyExchange::createKey(yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerKeyExchange` | `0x0874b520` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874b520  _ZN5yaSSL17ServerKeyExchange9createKeyERNS_3SSLE
#           yaSSL::ServerKeyExchange::createKey(yaSSL::SSL&)
# range [0x0874b520, 0x0874b5aa]
0874b520 +0x00:  push   %ebp
0874b521 +0x01:  mov    %esp,%ebp
0874b523 +0x03:  push   %edi
0874b524 +0x04:  push   %esi
0874b525 +0x05:  push   %ebx
0874b526 +0x06:  call   08722df8 <__i686.get_pc_thunk.bx>
0874b52b +0x0b:  add    $0xc2166d,%ebx
0874b531 +0x11:  sub    $0x1c,%esp
0874b534 +0x14:  mov    0xc(%ebp),%esi
0874b537 +0x17:  mov    %esi,(%esp)
0874b53a +0x1a:  call   08751180 <_ZNK5yaSSL3SSL10getFactoryEv>  ; yaSSL::SSL::getFactory() const
0874b53f +0x1f:  mov    %eax,(%esp)
0874b542 +0x22:  call   0874dfa0 <_ZNK5yaSSL10sslFactory12getServerKeyEv>  ; yaSSL::sslFactory::getServerKey() const
0874b547 +0x27:  mov    %esi,(%esp)
0874b54a +0x2a:  mov    %eax,%edi
0874b54c +0x2c:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0874b551 +0x31:  mov    %eax,(%esp)
0874b554 +0x34:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874b559 +0x39:  mov    0x4(%edi),%ecx
0874b55c +0x3c:  mov    0x1c(%eax),%edx
0874b55f +0x3f:  mov    (%edi),%eax
0874b561 +0x41:  cmp    %ecx,%eax
0874b563 +0x43:  jne    0874b56f <+0x4f>
0874b565 +0x45:  jmp    0874b588 <+0x68>
0874b567 +0x47:  nop
0874b568 +0x48:  add    $0x8,%eax
0874b56b +0x4b:  cmp    %eax,%ecx
0874b56d +0x4d:  je     0874b588 <+0x68>
0874b56f +0x4f:  cmp    (%eax),%edx
0874b571 +0x51:  jne    0874b568 <+0x48>
0874b573 +0x53:  call   *0x4(%eax)
0874b576 +0x56:  mov    0x8(%ebp),%edx
0874b579 +0x59:  test   %eax,%eax
0874b57b +0x5b:  mov    %eax,0x8(%edx)
0874b57e +0x5e:  je     0874b592 <+0x72>
0874b580 +0x60:  add    $0x1c,%esp
0874b583 +0x63:  pop    %ebx
0874b584 +0x64:  pop    %esi
0874b585 +0x65:  pop    %edi
0874b586 +0x66:  pop    %ebp
0874b587 +0x67:  ret
0874b588 +0x68:  mov    0x8(%ebp),%eax
0874b58b +0x6b:  movl   $0x0,0x8(%eax)
0874b592 +0x72:  mov    %esi,(%esp)
0874b595 +0x75:  movl   $0x67,0x4(%esp)
0874b59d +0x7d:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0874b5a2 +0x82:  add    $0x1c,%esp
0874b5a5 +0x85:  pop    %ebx
0874b5a6 +0x86:  pop    %esi
0874b5a7 +0x87:  pop    %edi
0874b5a8 +0x88:  pop    %ebp
0874b5a9 +0x89:  ret
0874b5aa +0x8a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ServerKeyExchange::createKey @ 0x874b520

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerKeyExchange::createKey(yaSSL::SSL&) */

void __thiscall yaSSL::ServerKeyExchange::createKey(ServerKeyExchange *this,SSL *param_1)

{
  sslFactory *this_00;
  undefined4 *puVar1;
  Security *this_01;
  int iVar2;
  int *piVar3;
  
  this_00 = (sslFactory *)SSL::getFactory();
  puVar1 = (undefined4 *)sslFactory::getServerKey(this_00);
  this_01 = (Security *)SSL::getSecurity(param_1);
  iVar2 = Security::get_parms(this_01);
  piVar3 = (int *)*puVar1;
  do {
    if (piVar3 == (int *)puVar1[1]) {
      *(undefined4 *)(this + 8) = 0;
LAB_0874b592:
      SSL::SetError(param_1,0x67);
      return;
    }
    if (*(int *)(iVar2 + 0x1c) == *piVar3) {
      iVar2 = (*(code *)piVar3[1])();
      *(int *)(this + 8) = iVar2;
      if (iVar2 != 0) {
        return;
      }
      goto LAB_0874b592;
    }
    piVar3 = piVar3 + 2;
  } while( true );
}
```
