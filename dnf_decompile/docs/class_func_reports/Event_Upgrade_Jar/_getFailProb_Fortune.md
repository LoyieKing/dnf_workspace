# _getFailProb_Fortune

`_ZNK17Event_Upgrade_Jar20_getFailProb_FortuneEij`

`Event_Upgrade_Jar::_getFailProb_Fortune(int, unsigned int) const`

| 类 | 地址 |
|---|---|
| `Event_Upgrade_Jar` | `0x080f4be0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f4be0  _ZNK17Event_Upgrade_Jar20_getFailProb_FortuneEij
#           Event_Upgrade_Jar::_getFailProb_Fortune(int, unsigned int) const
# range [0x080f4be0, 0x080f4c8d]
080f4be0 +0x00:  push   %ebp
080f4be1 +0x01:  mov    %esp,%ebp
080f4be3 +0x03:  push   %ebx
080f4be4 +0x04:  sub    $0x24,%esp
080f4be7 +0x07:  movl   $0x0,-0xc(%ebp)
080f4bee +0x0e:  jmp    080f4c67 <+0x87>
080f4bf0 +0x10:  mov    0xc(%ebp),%ebx
080f4bf3 +0x13:  mov    -0xc(%ebp),%eax
080f4bf6 +0x16:  mov    0x8(%ebp),%edx
080f4bf9 +0x19:  add    $0x34,%edx
080f4bfc +0x1c:  mov    %eax,0x4(%esp)
080f4c00 +0x20:  mov    %edx,(%esp)
080f4c03 +0x23:  call   080f5620 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5d1>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5d1
080f4c08 +0x28:  mov    (%eax),%eax
080f4c0a +0x2a:  cmp    %eax,%ebx
080f4c0c +0x2c:  sete   %al
080f4c0f +0x2f:  test   %al,%al
080f4c11 +0x31:  je     080f4c63 <+0x83>
080f4c13 +0x33:  mov    -0xc(%ebp),%edx
080f4c16 +0x36:  mov    %edx,%eax
080f4c18 +0x38:  add    %eax,%eax
080f4c1a +0x3a:  add    %edx,%eax
080f4c1c +0x3c:  shl    $0x2,%eax
080f4c1f +0x3f:  add    $0x40,%eax
080f4c22 +0x42:  add    0x8(%ebp),%eax
080f4c25 +0x45:  mov    %eax,(%esp)
080f4c28 +0x48:  call   080e2462 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x208>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x208
080f4c2d +0x4d:  cmp    0x10(%ebp),%eax
080f4c30 +0x50:  setbe  %al
080f4c33 +0x53:  test   %al,%al
080f4c35 +0x55:  je     080f4c3e <+0x5e>
080f4c37 +0x57:  mov    $&_ZL14gUnicodeBuffer+0xe174,%eax
080f4c3c +0x5c:  jmp    080f4c88 <+0xa8>
080f4c3e +0x5e:  mov    -0xc(%ebp),%edx
080f4c41 +0x61:  mov    %edx,%eax
080f4c43 +0x63:  add    %eax,%eax
080f4c45 +0x65:  add    %edx,%eax
080f4c47 +0x67:  shl    $0x2,%eax
080f4c4a +0x6a:  add    $0x40,%eax
080f4c4d +0x6d:  add    0x8(%ebp),%eax
080f4c50 +0x70:  mov    0x10(%ebp),%edx
080f4c53 +0x73:  mov    %edx,0x4(%esp)
080f4c57 +0x77:  mov    %eax,(%esp)
080f4c5a +0x7a:  call   080f5632 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5e3>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5e3
080f4c5f +0x7f:  mov    (%eax),%eax
080f4c61 +0x81:  jmp    080f4c88 <+0xa8>
080f4c63 +0x83:  addl   $0x1,-0xc(%ebp)
080f4c67 +0x87:  mov    0x8(%ebp),%eax
080f4c6a +0x8a:  add    $0x34,%eax
080f4c6d +0x8d:  mov    %eax,(%esp)
080f4c70 +0x90:  call   080f5604 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5b5>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5b5
080f4c75 +0x95:  cmp    -0xc(%ebp),%eax
080f4c78 +0x98:  setg   %al
080f4c7b +0x9b:  test   %al,%al
080f4c7d +0x9d:  jne    080f4bf0 <+0x10>
080f4c83 +0xa3:  mov    $&_ZL14gUnicodeBuffer+0xe174,%eax
080f4c88 +0xa8:  add    $0x24,%esp
080f4c8b +0xab:  pop    %ebx
080f4c8c +0xac:  pop    %ebp
080f4c8d +0xad:  ret
```

## 反编译 C

```c
// Event_Upgrade_Jar::_getFailProb_Fortune @ 0x80f4be0

/* Event_Upgrade_Jar::_getFailProb_Fortune(int, unsigned int) const */

undefined4 __thiscall
Event_Upgrade_Jar::_getFailProb_Fortune(Event_Upgrade_Jar *this,int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    iVar4 = std::vector<unsigned_long,std::allocator<unsigned_long>>::size
                      ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x34));
    if (iVar4 <= (int)local_10) {
      return 100000;
    }
    piVar1 = (int *)std::vector<unsigned_long,std::allocator<unsigned_long>>::operator[]
                              ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x34),
                               local_10);
    if (param_1 == *piVar1) break;
    local_10 = local_10 + 1;
  }
  uVar2 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size
                    ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                     (this + local_10 * 0xc + 0x40));
  if (uVar2 <= param_2) {
    return 100000;
  }
  puVar3 = (undefined4 *)
           std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                     ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                      (this + local_10 * 0xc + 0x40),param_2);
  return *puVar3;
}
```
