# swap_curpos_xy

`_ZN13CBattle_Field14swap_curpos_xyEii`

`CBattle_Field::swap_curpos_xy(int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830878e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830878e  _ZN13CBattle_Field14swap_curpos_xyEii
#           CBattle_Field::swap_curpos_xy(int, int)
# range [0x0830878e, 0x08308881]
0830878e +0x00:  push   %ebp
0830878f +0x01:  mov    %esp,%ebp
08308791 +0x03:  push   %ebx
08308792 +0x04:  sub    $0x24,%esp
08308795 +0x07:  mov    0x8(%ebp),%eax
08308798 +0x0a:  mov    0x188(%eax),%eax
0830879e +0x10:  test   %eax,%eax
083087a0 +0x12:  je     083087d9 <+0x4b>
083087a2 +0x14:  mov    0x8(%ebp),%eax
083087a5 +0x17:  mov    0x188(%eax),%eax
083087ab +0x1d:  mov    %eax,(%esp)
083087ae +0x20:  call   08365278 <_ZNK8CDungeon14IsEnterEachMapEv>  ; CDungeon::IsEnterEachMap() const
083087b3 +0x25:  test   %al,%al
083087b5 +0x27:  je     083087d9 <+0x4b>
083087b7 +0x29:  mov    0x8(%ebp),%eax
083087ba +0x2c:  mov    0x114(%eax),%eax
083087c0 +0x32:  test   %eax,%eax
083087c2 +0x34:  js     083087d9 <+0x4b>
083087c4 +0x36:  mov    0x8(%ebp),%eax
083087c7 +0x39:  mov    0x114(%eax),%eax
083087cd +0x3f:  cmp    $0x3,%eax
083087d0 +0x42:  jg     083087d9 <+0x4b>
083087d2 +0x44:  mov    $0x1,%eax
083087d7 +0x49:  jmp    083087de <+0x50>
083087d9 +0x4b:  mov    $0x0,%eax
083087de +0x50:  test   %al,%al
083087e0 +0x52:  je     08308853 <+0xc5>
083087e2 +0x54:  mov    0x8(%ebp),%eax
083087e5 +0x57:  mov    0x114(%eax),%ebx
083087eb +0x5d:  mov    0x8(%ebp),%eax
083087ee +0x60:  mov    0x114(%eax),%edx
083087f4 +0x66:  mov    0x8(%ebp),%ecx
083087f7 +0x69:  add    $0x6,%ebx
083087fa +0x6c:  mov    0x8(%ebp),%eax
083087fd +0x6f:  add    $0x2,%edx
08308800 +0x72:  lea    0xc(%eax,%edx,8),%edx
08308804 +0x76:  mov    (%edx),%eax
08308806 +0x78:  mov    0x4(%edx),%edx
08308809 +0x7b:  mov    %eax,0xc(%ecx,%ebx,8)
0830880d +0x7f:  mov    %edx,0x10(%ecx,%ebx,8)
08308811 +0x83:  lea    -0x10(%ebp),%eax
08308814 +0x86:  lea    0x10(%ebp),%edx
08308817 +0x89:  mov    %edx,0x8(%esp)
0830881b +0x8d:  lea    0xc(%ebp),%edx
0830881e +0x90:  mov    %edx,0x4(%esp)
08308822 +0x94:  mov    %eax,(%esp)
08308825 +0x97:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
0830882a +0x9c:  sub    $0x4,%esp
0830882d +0x9f:  mov    0x8(%ebp),%eax
08308830 +0xa2:  mov    0x114(%eax),%eax
08308836 +0xa8:  add    $0x2,%eax
08308839 +0xab:  shl    $0x3,%eax
0830883c +0xae:  add    0x8(%ebp),%eax
0830883f +0xb1:  lea    0xc(%eax),%edx
08308842 +0xb4:  lea    -0x10(%ebp),%eax
08308845 +0xb7:  mov    %eax,0x4(%esp)
08308849 +0xbb:  mov    %edx,(%esp)
0830884c +0xbe:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
08308851 +0xc3:  jmp    0830887d <+0xef>
08308853 +0xc5:  mov    0x8(%ebp),%eax
08308856 +0xc8:  mov    0x60(%eax),%edx
08308859 +0xcb:  mov    0x8(%ebp),%eax
0830885c +0xce:  mov    %edx,0x68(%eax)
0830885f +0xd1:  mov    0x8(%ebp),%eax
08308862 +0xd4:  mov    0x64(%eax),%edx
08308865 +0xd7:  mov    0x8(%ebp),%eax
08308868 +0xda:  mov    %edx,0x6c(%eax)
0830886b +0xdd:  mov    0xc(%ebp),%edx
0830886e +0xe0:  mov    0x8(%ebp),%eax
08308871 +0xe3:  mov    %edx,0x60(%eax)
08308874 +0xe6:  mov    0x10(%ebp),%edx
08308877 +0xe9:  mov    0x8(%ebp),%eax
0830887a +0xec:  mov    %edx,0x64(%eax)
0830887d +0xef:  mov    -0x4(%ebp),%ebx
08308880 +0xf2:  leave
08308881 +0xf3:  ret
```

## 反编译 C

```c
// CBattle_Field::swap_curpos_xy @ 0x830878e

/* CBattle_Field::swap_curpos_xy(int, int) */

void __thiscall CBattle_Field::swap_curpos_xy(CBattle_Field *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  int local_14 [3];
  
  if (*(int *)(this + 0x188) != 0) {
    cVar4 = CDungeon::IsEnterEachMap(*(CDungeon **)(this + 0x188));
    if (((cVar4 != '\0') && (-1 < *(int *)(this + 0x114))) && (*(int *)(this + 0x114) < 4)) {
      bVar3 = true;
      goto LAB_083087de;
    }
  }
  bVar3 = false;
LAB_083087de:
  if (bVar3) {
    iVar1 = *(int *)(this + 0x114);
    uVar2 = *(undefined4 *)(this + (*(int *)(this + 0x114) + 2) * 8 + 0xc + 4);
    *(undefined4 *)(this + (iVar1 + 6) * 8 + 0xc) =
         *(undefined4 *)(this + (*(int *)(this + 0x114) + 2) * 8 + 0xc);
    *(undefined4 *)(this + (iVar1 + 6) * 8 + 0x10) = uVar2;
    std::make_pair<int&,int&>(local_14,&param_1);
    std::pair<int,int>::operator=
              ((pair<int,int> *)(this + (*(int *)(this + 0x114) + 2) * 8 + 0xc),(pair *)local_14);
  }
  else {
    *(undefined4 *)(this + 0x68) = *(undefined4 *)(this + 0x60);
    *(undefined4 *)(this + 0x6c) = *(undefined4 *)(this + 100);
    *(int *)(this + 0x60) = param_1;
    *(int *)(this + 100) = param_2;
  }
  return;
}
```
