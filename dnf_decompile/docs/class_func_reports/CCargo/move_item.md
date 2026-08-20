# move_item

`_ZN6CCargo9move_itemEii`

`CCargo::move_item(int, int)`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850b904` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850b904  _ZN6CCargo9move_itemEii
#           CCargo::move_item(int, int)
# range [0x0850b904, 0x0850baff]
0850b904 +0x000:  push   %ebp
0850b905 +0x001:  mov    %esp,%ebp
0850b907 +0x003:  sub    $0x58,%esp
0850b90a +0x006:  mov    0xc(%ebp),%eax
0850b90d +0x009:  mov    %eax,0x4(%esp)
0850b911 +0x00d:  mov    0x8(%ebp),%eax
0850b914 +0x010:  mov    %eax,(%esp)
0850b917 +0x013:  call   0850d39c <_GLOBAL__I_g_emptySlot+0x2d1>  ; global constructors keyed to g_emptySlot+0x2d1
0850b91c +0x018:  xor    $0x1,%eax
0850b91f +0x01b:  test   %al,%al
0850b921 +0x01d:  jne    0850b93c <+0x38>
0850b923 +0x01f:  mov    0x10(%ebp),%eax
0850b926 +0x022:  mov    %eax,0x4(%esp)
0850b92a +0x026:  mov    0x8(%ebp),%eax
0850b92d +0x029:  mov    %eax,(%esp)
0850b930 +0x02c:  call   0850d39c <_GLOBAL__I_g_emptySlot+0x2d1>  ; global constructors keyed to g_emptySlot+0x2d1
0850b935 +0x031:  xor    $0x1,%eax
0850b938 +0x034:  test   %al,%al
0850b93a +0x036:  je     0850b943 <+0x3f>
0850b93c +0x038:  mov    $0x1,%eax
0850b941 +0x03d:  jmp    0850b948 <+0x44>
0850b943 +0x03f:  mov    $0x0,%eax
0850b948 +0x044:  test   %al,%al
0850b94a +0x046:  je     0850b956 <+0x52>
0850b94c +0x048:  mov    $0x0,%eax
0850b951 +0x04d:  jmp    0850bafe <+0x1fa>
0850b956 +0x052:  mov    0x8(%ebp),%eax
0850b959 +0x055:  mov    0x4(%eax),%edx
0850b95c +0x058:  mov    0xc(%ebp),%eax
0850b95f +0x05b:  imul   $0x3d,%eax,%eax
0850b962 +0x05e:  lea    (%edx,%eax,1),%eax
0850b965 +0x061:  mov    0x2(%eax),%eax
0850b968 +0x064:  test   %eax,%eax
0850b96a +0x066:  jne    0850b98c <+0x88>
0850b96c +0x068:  mov    0x8(%ebp),%eax
0850b96f +0x06b:  mov    0x4(%eax),%edx
0850b972 +0x06e:  mov    0x10(%ebp),%eax
0850b975 +0x071:  imul   $0x3d,%eax,%eax
0850b978 +0x074:  lea    (%edx,%eax,1),%eax
0850b97b +0x077:  mov    0x2(%eax),%eax
0850b97e +0x07a:  test   %eax,%eax
0850b980 +0x07c:  jne    0850b98c <+0x88>
0850b982 +0x07e:  mov    $0x0,%eax
0850b987 +0x083:  jmp    0850bafe <+0x1fa>
0850b98c +0x088:  lea    -0x45(%ebp),%eax
0850b98f +0x08b:  mov    %eax,(%esp)
0850b992 +0x08e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0850b997 +0x093:  mov    0x8(%ebp),%eax
0850b99a +0x096:  mov    0x4(%eax),%edx
0850b99d +0x099:  mov    0xc(%ebp),%eax
0850b9a0 +0x09c:  imul   $0x3d,%eax,%eax
0850b9a3 +0x09f:  lea    (%edx,%eax,1),%eax
0850b9a6 +0x0a2:  mov    (%eax),%edx
0850b9a8 +0x0a4:  mov    %edx,-0x45(%ebp)
0850b9ab +0x0a7:  mov    0x4(%eax),%edx
0850b9ae +0x0aa:  mov    %edx,-0x41(%ebp)
0850b9b1 +0x0ad:  mov    0x8(%eax),%edx
0850b9b4 +0x0b0:  mov    %edx,-0x3d(%ebp)
0850b9b7 +0x0b3:  mov    0xc(%eax),%edx
0850b9ba +0x0b6:  mov    %edx,-0x39(%ebp)
0850b9bd +0x0b9:  mov    0x10(%eax),%edx
0850b9c0 +0x0bc:  mov    %edx,-0x35(%ebp)
0850b9c3 +0x0bf:  mov    0x14(%eax),%edx
0850b9c6 +0x0c2:  mov    %edx,-0x31(%ebp)
0850b9c9 +0x0c5:  mov    0x18(%eax),%edx
0850b9cc +0x0c8:  mov    %edx,-0x2d(%ebp)
0850b9cf +0x0cb:  mov    0x1c(%eax),%edx
0850b9d2 +0x0ce:  mov    %edx,-0x29(%ebp)
0850b9d5 +0x0d1:  mov    0x20(%eax),%edx
0850b9d8 +0x0d4:  mov    %edx,-0x25(%ebp)
0850b9db +0x0d7:  mov    0x24(%eax),%edx
0850b9de +0x0da:  mov    %edx,-0x21(%ebp)
0850b9e1 +0x0dd:  mov    0x28(%eax),%edx
0850b9e4 +0x0e0:  mov    %edx,-0x1d(%ebp)
0850b9e7 +0x0e3:  mov    0x2c(%eax),%edx
0850b9ea +0x0e6:  mov    %edx,-0x19(%ebp)
0850b9ed +0x0e9:  mov    0x30(%eax),%edx
0850b9f0 +0x0ec:  mov    %edx,-0x15(%ebp)
0850b9f3 +0x0ef:  mov    0x34(%eax),%edx
0850b9f6 +0x0f2:  mov    %edx,-0x11(%ebp)
0850b9f9 +0x0f5:  mov    0x38(%eax),%edx
0850b9fc +0x0f8:  mov    %edx,-0xd(%ebp)
0850b9ff +0x0fb:  movzbl 0x3c(%eax),%eax
0850ba03 +0x0ff:  mov    %al,-0x9(%ebp)
0850ba06 +0x102:  mov    0x8(%ebp),%eax
0850ba09 +0x105:  mov    0x4(%eax),%edx
0850ba0c +0x108:  mov    0xc(%ebp),%eax
0850ba0f +0x10b:  imul   $0x3d,%eax,%eax
0850ba12 +0x10e:  lea    (%edx,%eax,1),%eax
0850ba15 +0x111:  mov    0x8(%ebp),%edx
0850ba18 +0x114:  mov    0x4(%edx),%ecx
0850ba1b +0x117:  mov    0x10(%ebp),%edx
0850ba1e +0x11a:  imul   $0x3d,%edx,%edx
0850ba21 +0x11d:  lea    (%ecx,%edx,1),%edx
0850ba24 +0x120:  mov    (%edx),%ecx
0850ba26 +0x122:  mov    %ecx,(%eax)
0850ba28 +0x124:  mov    0x4(%edx),%ecx
0850ba2b +0x127:  mov    %ecx,0x4(%eax)
0850ba2e +0x12a:  mov    0x8(%edx),%ecx
0850ba31 +0x12d:  mov    %ecx,0x8(%eax)
0850ba34 +0x130:  mov    0xc(%edx),%ecx
0850ba37 +0x133:  mov    %ecx,0xc(%eax)
0850ba3a +0x136:  mov    0x10(%edx),%ecx
0850ba3d +0x139:  mov    %ecx,0x10(%eax)
0850ba40 +0x13c:  mov    0x14(%edx),%ecx
0850ba43 +0x13f:  mov    %ecx,0x14(%eax)
0850ba46 +0x142:  mov    0x18(%edx),%ecx
0850ba49 +0x145:  mov    %ecx,0x18(%eax)
0850ba4c +0x148:  mov    0x1c(%edx),%ecx
0850ba4f +0x14b:  mov    %ecx,0x1c(%eax)
0850ba52 +0x14e:  mov    0x20(%edx),%ecx
0850ba55 +0x151:  mov    %ecx,0x20(%eax)
0850ba58 +0x154:  mov    0x24(%edx),%ecx
0850ba5b +0x157:  mov    %ecx,0x24(%eax)
0850ba5e +0x15a:  mov    0x28(%edx),%ecx
0850ba61 +0x15d:  mov    %ecx,0x28(%eax)
0850ba64 +0x160:  mov    0x2c(%edx),%ecx
0850ba67 +0x163:  mov    %ecx,0x2c(%eax)
0850ba6a +0x166:  mov    0x30(%edx),%ecx
0850ba6d +0x169:  mov    %ecx,0x30(%eax)
0850ba70 +0x16c:  mov    0x34(%edx),%ecx
0850ba73 +0x16f:  mov    %ecx,0x34(%eax)
0850ba76 +0x172:  mov    0x38(%edx),%ecx
0850ba79 +0x175:  mov    %ecx,0x38(%eax)
0850ba7c +0x178:  movzbl 0x3c(%edx),%edx
0850ba80 +0x17c:  mov    %dl,0x3c(%eax)
0850ba83 +0x17f:  mov    0x8(%ebp),%eax
0850ba86 +0x182:  mov    0x4(%eax),%edx
0850ba89 +0x185:  mov    0x10(%ebp),%eax
0850ba8c +0x188:  imul   $0x3d,%eax,%eax
0850ba8f +0x18b:  lea    (%edx,%eax,1),%eax
0850ba92 +0x18e:  mov    -0x45(%ebp),%edx
0850ba95 +0x191:  mov    %edx,(%eax)
0850ba97 +0x193:  mov    -0x41(%ebp),%edx
0850ba9a +0x196:  mov    %edx,0x4(%eax)
0850ba9d +0x199:  mov    -0x3d(%ebp),%edx
0850baa0 +0x19c:  mov    %edx,0x8(%eax)
0850baa3 +0x19f:  mov    -0x39(%ebp),%edx
0850baa6 +0x1a2:  mov    %edx,0xc(%eax)
0850baa9 +0x1a5:  mov    -0x35(%ebp),%edx
0850baac +0x1a8:  mov    %edx,0x10(%eax)
0850baaf +0x1ab:  mov    -0x31(%ebp),%edx
0850bab2 +0x1ae:  mov    %edx,0x14(%eax)
0850bab5 +0x1b1:  mov    -0x2d(%ebp),%edx
0850bab8 +0x1b4:  mov    %edx,0x18(%eax)
0850babb +0x1b7:  mov    -0x29(%ebp),%edx
0850babe +0x1ba:  mov    %edx,0x1c(%eax)
0850bac1 +0x1bd:  mov    -0x25(%ebp),%edx
0850bac4 +0x1c0:  mov    %edx,0x20(%eax)
0850bac7 +0x1c3:  mov    -0x21(%ebp),%edx
0850baca +0x1c6:  mov    %edx,0x24(%eax)
0850bacd +0x1c9:  mov    -0x1d(%ebp),%edx
0850bad0 +0x1cc:  mov    %edx,0x28(%eax)
0850bad3 +0x1cf:  mov    -0x19(%ebp),%edx
0850bad6 +0x1d2:  mov    %edx,0x2c(%eax)
0850bad9 +0x1d5:  mov    -0x15(%ebp),%edx
0850badc +0x1d8:  mov    %edx,0x30(%eax)
0850badf +0x1db:  mov    -0x11(%ebp),%edx
0850bae2 +0x1de:  mov    %edx,0x34(%eax)
0850bae5 +0x1e1:  mov    -0xd(%ebp),%edx
0850bae8 +0x1e4:  mov    %edx,0x38(%eax)
0850baeb +0x1e7:  movzbl -0x9(%ebp),%edx
0850baef +0x1eb:  mov    %dl,0x3c(%eax)
0850baf2 +0x1ee:  mov    0x8(%ebp),%eax
0850baf5 +0x1f1:  movb   $0x0,0x10(%eax)
0850baf9 +0x1f5:  mov    $0x1,%eax
0850bafe +0x1fa:  leave
0850baff +0x1fb:  ret
```

## 反编译 C

```c
// CCargo::move_item @ 0x850b904

/* CCargo::move_item(int, int) */

undefined4 __thiscall CCargo::move_item(CCargo *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  bool bVar18;
  char cVar19;
  undefined4 uVar20;
  Inven_Item local_49 [69];
  
  cVar19 = IsOperatorable(this,param_1);
  if (cVar19 == '\x01') {
    cVar19 = IsOperatorable(this,param_2);
    if (cVar19 == '\x01') {
      bVar18 = false;
      goto LAB_0850b948;
    }
  }
  bVar18 = true;
LAB_0850b948:
  if (bVar18) {
    uVar20 = 0;
  }
  else if ((*(int *)(*(int *)(this + 4) + param_1 * 0x3d + 2) == 0) &&
          (*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 2) == 0)) {
    uVar20 = 0;
  }
  else {
    Inven_Item::Inven_Item(local_49);
    puVar1 = (undefined4 *)(*(int *)(this + 4) + param_1 * 0x3d);
    uVar20 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    uVar7 = puVar1[4];
    uVar8 = puVar1[5];
    uVar9 = puVar1[6];
    uVar10 = puVar1[7];
    uVar11 = puVar1[8];
    uVar12 = puVar1[9];
    uVar13 = puVar1[10];
    uVar14 = puVar1[0xb];
    uVar15 = puVar1[0xc];
    uVar16 = puVar1[0xd];
    uVar17 = puVar1[0xe];
    uVar3 = *(undefined1 *)(puVar1 + 0xf);
    puVar1 = (undefined4 *)(*(int *)(this + 4) + param_1 * 0x3d);
    puVar2 = (undefined4 *)(*(int *)(this + 4) + param_2 * 0x3d);
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[6] = puVar2[6];
    puVar1[7] = puVar2[7];
    puVar1[8] = puVar2[8];
    puVar1[9] = puVar2[9];
    puVar1[10] = puVar2[10];
    puVar1[0xb] = puVar2[0xb];
    puVar1[0xc] = puVar2[0xc];
    puVar1[0xd] = puVar2[0xd];
    puVar1[0xe] = puVar2[0xe];
    *(undefined1 *)(puVar1 + 0xf) = *(undefined1 *)(puVar2 + 0xf);
    puVar1 = (undefined4 *)(*(int *)(this + 4) + param_2 * 0x3d);
    *puVar1 = uVar20;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1[4] = uVar7;
    puVar1[5] = uVar8;
    puVar1[6] = uVar9;
    puVar1[7] = uVar10;
    puVar1[8] = uVar11;
    puVar1[9] = uVar12;
    puVar1[10] = uVar13;
    puVar1[0xb] = uVar14;
    puVar1[0xc] = uVar15;
    puVar1[0xd] = uVar16;
    puVar1[0xe] = uVar17;
    *(undefined1 *)(puVar1 + 0xf) = uVar3;
    this[0x10] = (CCargo)0x0;
    uVar20 = 1;
  }
  return uVar20;
}
```
