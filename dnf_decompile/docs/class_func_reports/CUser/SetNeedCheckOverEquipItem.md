# SetNeedCheckOverEquipItem

`_ZN5CUser25SetNeedCheckOverEquipItemEv`

`CUser::SetNeedCheckOverEquipItem()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867ceae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867ceae  _ZN5CUser25SetNeedCheckOverEquipItemEv
#           CUser::SetNeedCheckOverEquipItem()
# range [0x0867ceae, 0x0867cf0b]
0867ceae +0x00:  push   %ebp
0867ceaf +0x01:  mov    %esp,%ebp
0867ceb1 +0x03:  sub    $0x28,%esp
0867ceb4 +0x06:  movl   $0x0,-0x10(%ebp)
0867cebb +0x0d:  jmp    0867ceef <+0x41>
0867cebd +0x0f:  mov    0x8(%ebp),%eax
0867cec0 +0x12:  lea    0x796e8(%eax),%edx
0867cec6 +0x18:  mov    -0x10(%ebp),%eax
0867cec9 +0x1b:  mov    %eax,0x4(%esp)
0867cecd +0x1f:  mov    %edx,(%esp)
0867ced0 +0x22:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0867ced5 +0x27:  mov    %eax,-0xc(%ebp)
0867ced8 +0x2a:  cmpl   $0x0,-0xc(%ebp)
0867cedc +0x2e:  je     0867ceea <+0x3c>
0867cede +0x30:  mov    -0xc(%ebp),%eax
0867cee1 +0x33:  movb   $0x1,0xe3b(%eax)
0867cee8 +0x3a:  jmp    0867ceeb <+0x3d>
0867ceea +0x3c:  nop
0867ceeb +0x3d:  addl   $0x1,-0x10(%ebp)
0867ceef +0x41:  mov    0x8(%ebp),%eax
0867cef2 +0x44:  add    $0x796e8,%eax
0867cef7 +0x49:  mov    %eax,(%esp)
0867cefa +0x4c:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
0867ceff +0x51:  cmp    -0x10(%ebp),%eax
0867cf02 +0x54:  seta   %al
0867cf05 +0x57:  test   %al,%al
0867cf07 +0x59:  jne    0867cebd <+0xf>
0867cf09 +0x5b:  leave
0867cf0a +0x5c:  ret
0867cf0b +0x5d:  nop
```

## 反编译 C

```c
// CUser::SetNeedCheckOverEquipItem @ 0x867ceae

/* CUser::SetNeedCheckOverEquipItem() */

void __thiscall CUser::SetNeedCheckOverEquipItem(CUser *this)

{
  int iVar1;
  uint uVar2;
  uint local_14;
  
  local_14 = 0;
  while( true ) {
    uVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8));
    if (uVar2 <= local_14) break;
    iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                       local_14);
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0xe3b) = 1;
    }
    local_14 = local_14 + 1;
  }
  return;
}
```
