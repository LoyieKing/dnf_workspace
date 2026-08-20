# createKey

`_ZN5yaSSL17ClientKeyExchange9createKeyERNS_3SSLE`

`yaSSL::ClientKeyExchange::createKey(yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientKeyExchange` | `0x0874b670` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874b670  _ZN5yaSSL17ClientKeyExchange9createKeyERNS_3SSLE
#           yaSSL::ClientKeyExchange::createKey(yaSSL::SSL&)
# range [0x0874b670, 0x0874b6fa]
0874b670 +0x00:  push   %ebp
0874b671 +0x01:  mov    %esp,%ebp
0874b673 +0x03:  push   %edi
0874b674 +0x04:  push   %esi
0874b675 +0x05:  push   %ebx
0874b676 +0x06:  call   08722df8 <__i686.get_pc_thunk.bx>
0874b67b +0x0b:  add    $0xc2151d,%ebx
0874b681 +0x11:  sub    $0x1c,%esp
0874b684 +0x14:  mov    0xc(%ebp),%esi
0874b687 +0x17:  mov    %esi,(%esp)
0874b68a +0x1a:  call   08751180 <_ZNK5yaSSL3SSL10getFactoryEv>  ; yaSSL::SSL::getFactory() const
0874b68f +0x1f:  mov    %eax,(%esp)
0874b692 +0x22:  call   0874dfb0 <_ZNK5yaSSL10sslFactory12getClientKeyEv>  ; yaSSL::sslFactory::getClientKey() const
0874b697 +0x27:  mov    %esi,(%esp)
0874b69a +0x2a:  mov    %eax,%edi
0874b69c +0x2c:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0874b6a1 +0x31:  mov    %eax,(%esp)
0874b6a4 +0x34:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874b6a9 +0x39:  mov    0x4(%edi),%ecx
0874b6ac +0x3c:  mov    0x1c(%eax),%edx
0874b6af +0x3f:  mov    (%edi),%eax
0874b6b1 +0x41:  cmp    %ecx,%eax
0874b6b3 +0x43:  jne    0874b6bf <+0x4f>
0874b6b5 +0x45:  jmp    0874b6d8 <+0x68>
0874b6b7 +0x47:  nop
0874b6b8 +0x48:  add    $0x8,%eax
0874b6bb +0x4b:  cmp    %eax,%ecx
0874b6bd +0x4d:  je     0874b6d8 <+0x68>
0874b6bf +0x4f:  cmp    (%eax),%edx
0874b6c1 +0x51:  jne    0874b6b8 <+0x48>
0874b6c3 +0x53:  call   *0x4(%eax)
0874b6c6 +0x56:  mov    0x8(%ebp),%edx
0874b6c9 +0x59:  test   %eax,%eax
0874b6cb +0x5b:  mov    %eax,0x8(%edx)
0874b6ce +0x5e:  je     0874b6e2 <+0x72>
0874b6d0 +0x60:  add    $0x1c,%esp
0874b6d3 +0x63:  pop    %ebx
0874b6d4 +0x64:  pop    %esi
0874b6d5 +0x65:  pop    %edi
0874b6d6 +0x66:  pop    %ebp
0874b6d7 +0x67:  ret
0874b6d8 +0x68:  mov    0x8(%ebp),%eax
0874b6db +0x6b:  movl   $0x0,0x8(%eax)
0874b6e2 +0x72:  mov    %esi,(%esp)
0874b6e5 +0x75:  movl   $0x67,0x4(%esp)
0874b6ed +0x7d:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0874b6f2 +0x82:  add    $0x1c,%esp
0874b6f5 +0x85:  pop    %ebx
0874b6f6 +0x86:  pop    %esi
0874b6f7 +0x87:  pop    %edi
0874b6f8 +0x88:  pop    %ebp
0874b6f9 +0x89:  ret
0874b6fa +0x8a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ClientKeyExchange::createKey @ 0x874b670

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientKeyExchange::createKey(yaSSL::SSL&) */

void __thiscall yaSSL::ClientKeyExchange::createKey(ClientKeyExchange *this,SSL *param_1)

{
  sslFactory *this_00;
  undefined4 *puVar1;
  Security *this_01;
  int iVar2;
  int *piVar3;
  
  this_00 = (sslFactory *)SSL::getFactory();
  puVar1 = (undefined4 *)sslFactory::getClientKey(this_00);
  this_01 = (Security *)SSL::getSecurity(param_1);
  iVar2 = Security::get_parms(this_01);
  piVar3 = (int *)*puVar1;
  do {
    if (piVar3 == (int *)puVar1[1]) {
      *(undefined4 *)(this + 8) = 0;
LAB_0874b6e2:
      SSL::SetError(param_1,0x67);
      return;
    }
    if (*(int *)(iVar2 + 0x1c) == *piVar3) {
      iVar2 = (*(code *)piVar3[1])();
      *(int *)(this + 8) = iVar2;
      if (iVar2 != 0) {
        return;
      }
      goto LAB_0874b6e2;
    }
    piVar3 = piVar3 + 2;
  } while( true );
}
```
