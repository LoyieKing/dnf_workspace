# finish_loading

`_ZN6CParty14finish_loadingEP5CUser`

`CParty::finish_loading(CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b15e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b15e0  _ZN6CParty14finish_loadingEP5CUser
#           CParty::finish_loading(CUser*)
# range [0x085b15e0, 0x085b1709]
085b15e0 +0x000:  push   %ebp
085b15e1 +0x001:  mov    %esp,%ebp
085b15e3 +0x003:  sub    $0x28,%esp
085b15e6 +0x006:  movl   $0x0,-0xc(%ebp)
085b15ed +0x00d:  jmp    085b166c <+0x8c>
085b15ef +0x00f:  mov    -0xc(%ebp),%edx
085b15f2 +0x012:  mov    0x8(%ebp),%ecx
085b15f5 +0x015:  mov    %edx,%eax
085b15f7 +0x017:  add    %eax,%eax
085b15f9 +0x019:  add    %edx,%eax
085b15fb +0x01b:  shl    $0x3,%eax
085b15fe +0x01e:  lea    (%ecx,%eax,1),%eax
085b1601 +0x021:  add    $0x78,%eax
085b1604 +0x024:  mov    (%eax),%eax
085b1606 +0x026:  cmp    0xc(%ebp),%eax
085b1609 +0x029:  jne    085b1668 <+0x88>
085b160b +0x02b:  mov    -0xc(%ebp),%eax
085b160e +0x02e:  mov    0x8(%ebp),%edx
085b1611 +0x031:  movzbl 0x37c(%edx,%eax,1),%eax
085b1619 +0x039:  test   %al,%al
085b161b +0x03b:  jne    085b1706 <+0x126>
085b1621 +0x041:  mov    -0xc(%ebp),%eax
085b1624 +0x044:  mov    0x8(%ebp),%edx
085b1627 +0x047:  movb   $0x1,0x37c(%edx,%eax,1)
085b162f +0x04f:  mov    -0xc(%ebp),%eax
085b1632 +0x052:  mov    0x8(%ebp),%edx
085b1635 +0x055:  movzbl 0xb10(%edx,%eax,1),%eax
085b163d +0x05d:  xor    $0x1,%eax
085b1640 +0x060:  test   %al,%al
085b1642 +0x062:  je     085b1668 <+0x88>
085b1644 +0x064:  mov    0xc(%ebp),%eax
085b1647 +0x067:  mov    %eax,0x4(%esp)
085b164b +0x06b:  mov    0x8(%ebp),%eax
085b164e +0x06e:  mov    %eax,(%esp)
085b1651 +0x071:  call   085b170a <_ZN6CParty23OnStartMapFinishLoadingEP5CUser>  ; CParty::OnStartMapFinishLoading(CUser*)
085b1656 +0x076:  test   %al,%al
085b1658 +0x078:  je     085b1668 <+0x88>
085b165a +0x07a:  mov    -0xc(%ebp),%eax
085b165d +0x07d:  mov    0x8(%ebp),%edx
085b1660 +0x080:  movb   $0x1,0xb10(%edx,%eax,1)
085b1668 +0x088:  addl   $0x1,-0xc(%ebp)
085b166c +0x08c:  cmpl   $0x3,-0xc(%ebp)
085b1670 +0x090:  setle  %al
085b1673 +0x093:  test   %al,%al
085b1675 +0x095:  jne    085b15ef <+0xf>
085b167b +0x09b:  mov    0x8(%ebp),%eax
085b167e +0x09e:  add    $0xb24,%eax
085b1683 +0x0a3:  mov    %eax,(%esp)
085b1686 +0x0a6:  call   080fdcfc <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x28>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x28
085b168b +0x0ab:  mov    %eax,-0x10(%ebp)
085b168e +0x0ae:  cmpl   $0x0,-0x10(%ebp)
085b1692 +0x0b2:  je     085b16aa <+0xca>
085b1694 +0x0b4:  mov    -0x10(%ebp),%eax
085b1697 +0x0b7:  mov    %eax,(%esp)
085b169a +0x0ba:  call   08365278 <_ZNK8CDungeon14IsEnterEachMapEv>  ; CDungeon::IsEnterEachMap() const
085b169f +0x0bf:  test   %al,%al
085b16a1 +0x0c1:  je     085b16aa <+0xca>
085b16a3 +0x0c3:  mov    $0x1,%eax
085b16a8 +0x0c8:  jmp    085b16af <+0xcf>
085b16aa +0x0ca:  mov    $0x0,%eax
085b16af +0x0cf:  test   %al,%al
085b16b1 +0x0d1:  je     085b16f1 <+0x111>
085b16b3 +0x0d3:  mov    0x8(%ebp),%eax
085b16b6 +0x0d6:  add    $0xb24,%eax
085b16bb +0x0db:  mov    %eax,(%esp)
085b16be +0x0de:  call   08307656 <_ZN13CBattle_Field19IsFirstEnterDungeonEv>  ; CBattle_Field::IsFirstEnterDungeon()
085b16c3 +0x0e3:  test   %al,%al
085b16c5 +0x0e5:  je     085b16dc <+0xfc>
085b16c7 +0x0e7:  movl   $0x0,0x4(%esp)
085b16cf +0x0ef:  mov    0x8(%ebp),%eax
085b16d2 +0x0f2:  mov    %eax,(%esp)
085b16d5 +0x0f5:  call   085b17a4 <_ZN6CParty23check_allmember_loadingEb>  ; CParty::check_allmember_loading(bool)
085b16da +0x0fa:  jmp    085b1707 <+0x127>
085b16dc +0x0fc:  movl   $0x1,0x4(%esp)
085b16e4 +0x104:  mov    0x8(%ebp),%eax
085b16e7 +0x107:  mov    %eax,(%esp)
085b16ea +0x10a:  call   085b17a4 <_ZN6CParty23check_allmember_loadingEb>  ; CParty::check_allmember_loading(bool)
085b16ef +0x10f:  jmp    085b1707 <+0x127>
085b16f1 +0x111:  movl   $0x0,0x4(%esp)
085b16f9 +0x119:  mov    0x8(%ebp),%eax
085b16fc +0x11c:  mov    %eax,(%esp)
085b16ff +0x11f:  call   085b17a4 <_ZN6CParty23check_allmember_loadingEb>  ; CParty::check_allmember_loading(bool)
085b1704 +0x124:  jmp    085b1707 <+0x127>
085b1706 +0x126:  nop
085b1707 +0x127:  leave
085b1708 +0x128:  ret
085b1709 +0x129:  nop
```

## 反编译 C

```c
// CParty::finish_loading @ 0x85b15e0

/* CParty::finish_loading(CUser*) */

void __thiscall CParty::finish_loading(CParty *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  CDungeon *this_00;
  int local_10;
  
  local_10 = 0;
  do {
    if (3 < local_10) {
      this_00 = (CDungeon *)CBattle_Field::GetDungeon((CBattle_Field *)(this + 0xb24));
      if ((this_00 == (CDungeon *)0x0) || (cVar2 = CDungeon::IsEnterEachMap(this_00), cVar2 == '\0')
         ) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        cVar2 = CBattle_Field::IsFirstEnterDungeon((CBattle_Field *)(this + 0xb24));
        if (cVar2 == '\0') {
          check_allmember_loading(this,true);
        }
        else {
          check_allmember_loading(this,false);
        }
      }
      else {
        check_allmember_loading(this,false);
      }
      return;
    }
    if (*(CUser **)(this + local_10 * 0x18 + 0x78) == param_1) {
      if (this[local_10 + 0x37c] != (CParty)0x0) {
        return;
      }
      this[local_10 + 0x37c] = (CParty)0x1;
      if ((this[local_10 + 0xb10] != (CParty)0x1) &&
         (cVar2 = OnStartMapFinishLoading(this,param_1), cVar2 != '\0')) {
        this[local_10 + 0xb10] = (CParty)0x1;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
