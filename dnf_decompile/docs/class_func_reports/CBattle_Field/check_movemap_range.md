# check_movemap_range

`_ZN13CBattle_Field19check_movemap_rangeEii`

`CBattle_Field::check_movemap_range(int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08307b2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08307b2a  _ZN13CBattle_Field19check_movemap_rangeEii
#           CBattle_Field::check_movemap_range(int, int)
# range [0x08307b2a, 0x08307c79]
08307b2a +0x000:  push   %ebp
08307b2b +0x001:  mov    %esp,%ebp
08307b2d +0x003:  push   %edi
08307b2e +0x004:  push   %esi
08307b2f +0x005:  push   %ebx
08307b30 +0x006:  sub    $0x4c,%esp
08307b33 +0x009:  movl   $0xffffffff,-0x24(%ebp)
08307b3a +0x010:  movl   $0xffffffff,-0x28(%ebp)
08307b41 +0x017:  lea    -0x28(%ebp),%eax
08307b44 +0x01a:  mov    %eax,0x8(%esp)
08307b48 +0x01e:  lea    -0x24(%ebp),%eax
08307b4b +0x021:  mov    %eax,0x4(%esp)
08307b4f +0x025:  mov    0x8(%ebp),%eax
08307b52 +0x028:  mov    %eax,(%esp)
08307b55 +0x02b:  call   08300da6 <_ZN13CBattle_Field11getCurPosXYERiS0_>  ; CBattle_Field::getCurPosXY(int&, int&)
08307b5a +0x030:  mov    -0x24(%ebp),%eax
08307b5d +0x033:  mov    0xc(%ebp),%edx
08307b60 +0x036:  sub    %eax,%edx
08307b62 +0x038:  mov    %edx,%eax
08307b64 +0x03a:  sar    $0x1f,%eax
08307b67 +0x03d:  xor    %eax,%edx
08307b69 +0x03f:  mov    %edx,-0x20(%ebp)
08307b6c +0x042:  sub    %eax,-0x20(%ebp)
08307b6f +0x045:  mov    -0x28(%ebp),%eax
08307b72 +0x048:  mov    0x10(%ebp),%edx
08307b75 +0x04b:  sub    %eax,%edx
08307b77 +0x04d:  mov    %edx,%eax
08307b79 +0x04f:  sar    $0x1f,%eax
08307b7c +0x052:  xor    %eax,%edx
08307b7e +0x054:  mov    %edx,-0x1c(%ebp)
08307b81 +0x057:  sub    %eax,-0x1c(%ebp)
08307b84 +0x05a:  cmpl   $0x1,-0x20(%ebp)
08307b88 +0x05e:  jg     08307ba4 <+0x7a>
08307b8a +0x060:  cmpl   $0x1,-0x1c(%ebp)
08307b8e +0x064:  jg     08307ba4 <+0x7a>
08307b90 +0x066:  cmpl   $0x1,-0x20(%ebp)
08307b94 +0x06a:  jne    08307c6c <+0x142>
08307b9a +0x070:  cmpl   $0x1,-0x1c(%ebp)
08307b9e +0x074:  jne    08307c6c <+0x142>
08307ba4 +0x07a:  movl   $0x0,0xc(%esp)
08307bac +0x082:  mov    0x10(%ebp),%eax
08307baf +0x085:  mov    %eax,0x8(%esp)
08307bb3 +0x089:  mov    0xc(%ebp),%eax
08307bb6 +0x08c:  mov    %eax,0x4(%esp)
08307bba +0x090:  mov    0x8(%ebp),%eax
08307bbd +0x093:  mov    %eax,(%esp)
08307bc0 +0x096:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
08307bc5 +0x09b:  movzbl 0xe8(%eax),%eax
08307bcc +0x0a2:  test   %al,%al
08307bce +0x0a4:  je     08307bd7 <+0xad>
08307bd0 +0x0a6:  mov    $"layeredMap",%eax
08307bd5 +0x0ab:  jmp    08307bdc <+0xb2>
08307bd7 +0x0ad:  mov    $"generalMap",%eax
08307bdc +0x0b2:  mov    %eax,%edi
08307bde +0x0b4:  mov    0x8(%ebp),%eax
08307be1 +0x0b7:  mov    0x64(%eax),%esi
08307be4 +0x0ba:  mov    0x8(%ebp),%eax
08307be7 +0x0bd:  mov    0x60(%eax),%ebx
08307bea +0x0c0:  movl   $0x0,0xc(%esp)
08307bf2 +0x0c8:  mov    0x10(%ebp),%eax
08307bf5 +0x0cb:  mov    %eax,0x8(%esp)
08307bf9 +0x0cf:  mov    0xc(%ebp),%eax
08307bfc +0x0d2:  mov    %eax,0x4(%esp)
08307c00 +0x0d6:  mov    0x8(%ebp),%eax
08307c03 +0x0d9:  mov    %eax,(%esp)
08307c06 +0x0dc:  call   0822cc48 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22f2
08307c0b +0x0e1:  mov    0x4(%eax),%edx
08307c0e +0x0e4:  mov    0x8(%ebp),%eax
08307c11 +0x0e7:  mov    0x194(%eax),%eax
08307c17 +0x0ed:  mov    %edi,0x2c(%esp)
08307c1b +0x0f1:  mov    0x10(%ebp),%ecx
08307c1e +0x0f4:  mov    %ecx,0x28(%esp)
08307c22 +0x0f8:  mov    0xc(%ebp),%ecx
08307c25 +0x0fb:  mov    %ecx,0x24(%esp)
08307c29 +0x0ff:  mov    %esi,0x20(%esp)
08307c2d +0x103:  mov    %ebx,0x1c(%esp)
08307c31 +0x107:  mov    %edx,0x18(%esp)
08307c35 +0x10b:  mov    %eax,0x14(%esp)
08307c39 +0x10f:  movl   $"TRY MoveMap [3][Dungeon Type : %d][Map Index : %d](%d,%d) -> (%d,%d) [Map Kind : %s]",0x10(%esp)
08307c41 +0x117:  movl   $0x119f,0xc(%esp)
08307c49 +0x11f:  movl   $&_ZZN13CBattle_Field19check_movemap_rangeEiiE19__PRETTY_FUNCTION__,0x8(%esp)
08307c51 +0x127:  movl   $"battle_field.cpp",0x4(%esp)
08307c59 +0x12f:  movl   $0x1,(%esp)
08307c60 +0x136:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08307c65 +0x13b:  mov    $0x15,%eax
08307c6a +0x140:  jmp    08307c71 <+0x147>
08307c6c +0x142:  mov    $0x0,%eax
08307c71 +0x147:  add    $0x4c,%esp
08307c74 +0x14a:  pop    %ebx
08307c75 +0x14b:  pop    %esi
08307c76 +0x14c:  pop    %edi
08307c77 +0x14d:  pop    %ebp
08307c78 +0x14e:  ret
08307c79 +0x14f:  nop
```

## 反编译 C

```c
// CBattle_Field::check_movemap_range @ 0x8307b2a

/* CBattle_Field::check_movemap_range(int, int) */

undefined4 __thiscall
CBattle_Field::check_movemap_range(CBattle_Field *this,int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_28 = -1;
  local_2c = -1;
  getCurPosXY(this,&local_28,&local_2c);
  uVar2 = param_1 - local_28 >> 0x1f;
  local_24 = (param_1 - local_28 ^ uVar2) - uVar2;
  uVar2 = param_2 - local_2c >> 0x1f;
  local_20 = (param_2 - local_2c ^ uVar2) - uVar2;
  if (((local_24 < 2) && (local_20 < 2)) && ((local_24 != 1 || (local_20 != 1)))) {
    uVar5 = 0;
  }
  else {
    iVar3 = GetMapInfoFromPos(this,param_1,param_2,false);
    if (*(char *)(iVar3 + 0xe8) == '\0') {
      pcVar4 = "generalMap";
    }
    else {
      pcVar4 = "layeredMap";
    }
    uVar5 = *(undefined4 *)(this + 100);
    uVar1 = *(undefined4 *)(this + 0x60);
    iVar3 = GetMapInfoFromPos(this,param_1,param_2,false);
    LogManager::logFormat
              (1,"battle_field.cpp","int CBattle_Field::check_movemap_range(int, int)",0x119f,
               "TRY MoveMap [3][Dungeon Type : %d][Map Index : %d](%d,%d) -> (%d,%d) [Map Kind : %s]"
               ,*(undefined4 *)(this + 0x194),*(undefined4 *)(iVar3 + 4),uVar1,uVar5,param_1,param_2
               ,pcVar4);
    uVar5 = 0x15;
  }
  return uVar5;
}
```
