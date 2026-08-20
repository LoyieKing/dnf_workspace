# Final

`_ZN8TaoCrypt3MD25FinalEPh`

`TaoCrypt::MD2::Final(unsigned char*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MD2` | `0x08764f10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08764f10  _ZN8TaoCrypt3MD25FinalEPh
#           TaoCrypt::MD2::Final(unsigned char*)
# range [0x08764f10, 0x08765019]
08764f10 +0x000:  push   %ebp
08764f11 +0x001:  mov    $0x10,%eax
08764f16 +0x006:  mov    %esp,%ebp
08764f18 +0x008:  push   %edi
08764f19 +0x009:  push   %esi
08764f1a +0x00a:  sub    $0x40,%esp
08764f1d +0x00d:  mov    0x8(%ebp),%edx
08764f20 +0x010:  lea    -0x18(%ebp),%esi
08764f23 +0x013:  sub    0x28(%edx),%eax
08764f26 +0x016:  mov    %eax,-0x1c(%ebp)
08764f29 +0x019:  je     08764fa4 <+0x94>
08764f2b +0x01b:  mov    %eax,%ecx
08764f2d +0x01d:  mov    %eax,%edi
08764f2f +0x01f:  shr    $0x2,%ecx
08764f32 +0x022:  mov    %ecx,%edx
08764f34 +0x024:  shl    $0x2,%edx
08764f37 +0x027:  cmp    $0x3,%eax
08764f3a +0x02a:  mov    %ecx,-0x24(%ebp)
08764f3d +0x02d:  jbe    08765007 <+0xf7>
08764f43 +0x033:  test   %edx,%edx
08764f45 +0x035:  je     08765007 <+0xf7>
08764f4b +0x03b:  xor    %ecx,%ecx
08764f4d +0x03d:  mov    -0x1c(%ebp),%cl
08764f50 +0x040:  movzbl %al,%eax
08764f53 +0x043:  mov    -0x1c(%ebp),%ch
08764f56 +0x046:  mov    %eax,-0x2c(%ebp)
08764f59 +0x049:  shl    $0x10,%eax
08764f5c +0x04c:  mov    %eax,-0x20(%ebp)
08764f5f +0x04f:  mov    -0x2c(%ebp),%eax
08764f62 +0x052:  movzwl %cx,%ecx
08764f65 +0x055:  or     -0x20(%ebp),%ecx
08764f68 +0x058:  mov    %edx,-0x20(%ebp)
08764f6b +0x05b:  mov    -0x24(%ebp),%edx
08764f6e +0x05e:  shl    $0x18,%eax
08764f71 +0x061:  or     %eax,%ecx
08764f73 +0x063:  xor    %eax,%eax
08764f75 +0x065:  lea    0x0(%esi),%esi
08764f78 +0x068:  mov    %ecx,(%esi,%eax,4)
08764f7b +0x06b:  add    $0x1,%eax
08764f7e +0x06e:  cmp    %eax,%edx
08764f80 +0x070:  ja     08764f78 <+0x68>
08764f82 +0x072:  mov    -0x20(%ebp),%edx
08764f85 +0x075:  cmp    %edx,-0x1c(%ebp)
08764f88 +0x078:  je     08764fa4 <+0x94>
08764f8a +0x07a:  mov    %edi,%ecx
08764f8c +0x07c:  mov    -0x1c(%ebp),%edi
08764f8f +0x07f:  lea    (%esi,%edx,1),%eax
08764f92 +0x082:  lea    0x0(%esi),%esi
08764f98 +0x088:  add    $0x1,%edx
08764f9b +0x08b:  mov    %cl,(%eax)
08764f9d +0x08d:  add    $0x1,%eax
08764fa0 +0x090:  cmp    %edx,%edi
08764fa2 +0x092:  ja     08764f98 <+0x88>
08764fa4 +0x094:  mov    0x8(%ebp),%edx
08764fa7 +0x097:  mov    -0x1c(%ebp),%ecx
08764faa +0x09a:  mov    (%edx),%eax
08764fac +0x09c:  mov    %ecx,0x8(%esp)
08764fb0 +0x0a0:  mov    %esi,0x4(%esp)
08764fb4 +0x0a4:  mov    %edx,(%esp)
08764fb7 +0x0a7:  call   *0x8(%eax)
08764fba +0x0aa:  mov    0x8(%ebp),%edx
08764fbd +0x0ad:  mov    (%edx),%eax
08764fbf +0x0af:  mov    %edx,%ecx
08764fc1 +0x0b1:  movl   $0x10,0x8(%esp)
08764fc9 +0x0b9:  mov    0x14(%edx),%edx
08764fcc +0x0bc:  mov    %ecx,(%esp)
08764fcf +0x0bf:  mov    %edx,0x4(%esp)
08764fd3 +0x0c3:  call   *0x8(%eax)
08764fd6 +0x0c6:  mov    0x8(%ebp),%edx
08764fd9 +0x0c9:  mov    0xc(%ebp),%ecx
08764fdc +0x0cc:  mov    0x8(%edx),%eax
08764fdf +0x0cf:  mov    (%eax),%edx
08764fe1 +0x0d1:  mov    %edx,(%ecx)
08764fe3 +0x0d3:  mov    0x4(%eax),%edx
08764fe6 +0x0d6:  mov    %edx,0x4(%ecx)
08764fe9 +0x0d9:  mov    0x8(%eax),%edx
08764fec +0x0dc:  mov    %edx,0x8(%ecx)
08764fef +0x0df:  mov    0xc(%eax),%eax
08764ff2 +0x0e2:  mov    %eax,0xc(%ecx)
08764ff5 +0x0e5:  mov    0x8(%ebp),%edx
08764ff8 +0x0e8:  mov    (%edx),%eax
08764ffa +0x0ea:  mov    %edx,(%esp)
08764ffd +0x0ed:  call   *0x10(%eax)
08765000 +0x0f0:  add    $0x40,%esp
08765003 +0x0f3:  pop    %esi
08765004 +0x0f4:  pop    %edi
08765005 +0x0f5:  pop    %ebp
08765006 +0x0f6:  ret
08765007 +0x0f7:  xor    %edx,%edx
08765009 +0x0f9:  lea    -0x18(%ebp),%esi
0876500c +0x0fc:  jmp    08764f8a <+0x7a>
08765011 +0x101:  nop
08765012 +0x102:  lea    0x0(%esi,%eiz,1),%esi
08765019 +0x109:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::MD2::Final @ 0x8764f10

/* TaoCrypt::MD2::Final(unsigned char*) */

void __thiscall TaoCrypt::MD2::Final(MD2 *this,uchar *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint local_1c [4];
  
  uVar2 = 0x10 - *(int *)(this + 0x28);
  if (uVar2 != 0) {
    uVar6 = uVar2 >> 2;
    uVar7 = uVar6 << 2;
    uVar5 = (undefined1)uVar2;
    if ((uVar2 < 4) || (uVar6 == 0)) {
      uVar7 = 0;
    }
    else {
      uVar3 = 0;
      do {
        local_1c[uVar3] =
             (uint)CONCAT11(uVar5,uVar5) | (uVar2 & 0xff) << 0x10 | (uVar2 & 0xff) << 0x18;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar6);
      if (uVar2 == uVar7) goto LAB_08764fa4;
    }
    puVar4 = (undefined1 *)((int)local_1c + uVar7);
    do {
      uVar7 = uVar7 + 1;
      *puVar4 = uVar5;
      puVar4 = puVar4 + 1;
    } while (uVar7 < uVar2);
  }
LAB_08764fa4:
  (**(code **)(*(int *)this + 8))(this,local_1c,uVar2);
  (**(code **)(*(int *)this + 8))(this,*(undefined4 *)(this + 0x14),0x10);
  puVar1 = *(undefined4 **)(this + 8);
  *(undefined4 *)param_1 = *puVar1;
  *(undefined4 *)(param_1 + 4) = puVar1[1];
  *(undefined4 *)(param_1 + 8) = puVar1[2];
  *(undefined4 *)(param_1 + 0xc) = puVar1[3];
  (**(code **)(*(int *)this + 0x10))(this);
  return;
}
```
