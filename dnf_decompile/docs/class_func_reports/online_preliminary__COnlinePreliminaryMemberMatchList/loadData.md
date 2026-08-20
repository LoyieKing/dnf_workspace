# loadData

`_ZN18online_preliminary33COnlinePreliminaryMemberMatchList8loadDataEP5CUserPc`

`online_preliminary::COnlinePreliminaryMemberMatchList::loadData(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryMemberMatchList` | `0x08586466` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08586466  _ZN18online_preliminary33COnlinePreliminaryMemberMatchList8loadDataEP5CUserPc
#           online_preliminary::COnlinePreliminaryMemberMatchList::loadData(CUser*, char*)
# range [0x08586466, 0x0858650f]
08586466 +0x00:  push   %ebp
08586467 +0x01:  mov    %esp,%ebp
08586469 +0x03:  push   %ebx
0858646a +0x04:  sub    $0x24,%esp
0858646d +0x07:  mov    0x10(%ebp),%eax
08586470 +0x0a:  mov    %eax,-0x10(%ebp)
08586473 +0x0d:  movl   $0x0,-0xc(%ebp)
0858647a +0x14:  jmp    085864f1 <+0x8b>
0858647c +0x16:  mov    -0xc(%ebp),%edx
0858647f +0x19:  mov    -0x10(%ebp),%ecx
08586482 +0x1c:  mov    %edx,%eax
08586484 +0x1e:  add    %eax,%eax
08586486 +0x20:  add    %edx,%eax
08586488 +0x22:  shl    $0x2,%eax
0858648b +0x25:  lea    (%ecx,%eax,1),%eax
0858648e +0x28:  add    $0x10,%eax
08586491 +0x2b:  mov    (%eax),%ecx
08586493 +0x2d:  mov    -0xc(%ebp),%edx
08586496 +0x30:  mov    -0x10(%ebp),%ebx
08586499 +0x33:  mov    %edx,%eax
0858649b +0x35:  add    %eax,%eax
0858649d +0x37:  add    %edx,%eax
0858649f +0x39:  shl    $0x2,%eax
085864a2 +0x3c:  movzwl 0xc(%eax,%ebx,1),%eax
085864a7 +0x41:  movzwl %ax,%eax
085864aa +0x44:  mov    %ecx,0x8(%esp)
085864ae +0x48:  mov    %eax,0x4(%esp)
085864b2 +0x4c:  lea    -0x18(%ebp),%eax
085864b5 +0x4f:  mov    %eax,(%esp)
085864b8 +0x52:  call   0858691e <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x66>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x66
085864bd +0x57:  mov    0x8(%ebp),%eax
085864c0 +0x5a:  lea    0x8(%eax),%edx
085864c3 +0x5d:  lea    -0x18(%ebp),%eax
085864c6 +0x60:  mov    %eax,0x4(%esp)
085864ca +0x64:  mov    %edx,(%esp)
085864cd +0x67:  call   08586bba <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x302>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x302
085864d2 +0x6c:  mov    %eax,%ecx
085864d4 +0x6e:  mov    -0xc(%ebp),%edx
085864d7 +0x71:  mov    -0x10(%ebp),%ebx
085864da +0x74:  mov    %edx,%eax
085864dc +0x76:  add    %eax,%eax
085864de +0x78:  add    %edx,%eax
085864e0 +0x7a:  shl    $0x2,%eax
085864e3 +0x7d:  lea    (%ebx,%eax,1),%eax
085864e6 +0x80:  add    $0x14,%eax
085864e9 +0x83:  mov    (%eax),%eax
085864eb +0x85:  mov    %eax,(%ecx)
085864ed +0x87:  addl   $0x1,-0xc(%ebp)
085864f1 +0x8b:  mov    -0x10(%ebp),%eax
085864f4 +0x8e:  mov    0x8(%eax),%eax
085864f7 +0x91:  cmp    -0xc(%ebp),%eax
085864fa +0x94:  setg   %al
085864fd +0x97:  test   %al,%al
085864ff +0x99:  jne    0858647c <+0x16>
08586505 +0x9f:  mov    $0x1,%eax
0858650a +0xa4:  add    $0x24,%esp
0858650d +0xa7:  pop    %ebx
0858650e +0xa8:  pop    %ebp
0858650f +0xa9:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryMemberMatchList::loadData @ 0x8586466

/* online_preliminary::COnlinePreliminaryMemberMatchList::loadData(CUser*, char*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminaryMemberMatchList::loadData
          (COnlinePreliminaryMemberMatchList *this,CUser *param_1,char *param_2)

{
  undefined4 *puVar1;
  CharacterInServer local_1c [8];
  char *local_14;
  int local_10;
  
  local_14 = param_2;
  for (local_10 = 0; local_10 < *(int *)(local_14 + 8); local_10 = local_10 + 1) {
    CharacterInServer::CharacterInServer
              (local_1c,(uint)*(ushort *)(local_14 + local_10 * 0xc + 0xc),
               *(uint *)(local_14 + local_10 * 0xc + 0x10));
    puVar1 = (undefined4 *)
             std::
             map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
             ::operator[]((map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
                           *)(this + 8),local_1c);
    *puVar1 = *(undefined4 *)(local_14 + local_10 * 0xc + 0x14);
  }
  return 1;
}
```
