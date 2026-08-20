# AddNewMail

`_ZN8WongWork8CMailBox10AddNewMailERKNS0_17stAddNewMailInputE`

`WongWork::CMailBox::AddNewMail(WongWork::CMailBox::stAddNewMailInput const&)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBox` | `0x08551f5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08551f5a  _ZN8WongWork8CMailBox10AddNewMailERKNS0_17stAddNewMailInputE
#           WongWork::CMailBox::AddNewMail(WongWork::CMailBox::stAddNewMailInput const&)
# range [0x08551f5a, 0x08552137]
08551f5a +0x000:  push   %ebp
08551f5b +0x001:  mov    %esp,%ebp
08551f5d +0x003:  push   %ebx
08551f5e +0x004:  sub    $0x74,%esp
08551f61 +0x007:  mov    0x8(%ebp),%eax
08551f64 +0x00a:  add    $0x10,%eax
08551f67 +0x00d:  mov    %eax,(%esp)
08551f6a +0x010:  call   08558462 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xfc3>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xfc3
08551f6f +0x015:  mov    %eax,-0x64(%ebp)
08551f72 +0x018:  mov    -0x64(%ebp),%eax
08551f75 +0x01b:  test   %eax,%eax
08551f77 +0x01d:  jne    08551f83 <+0x29>
08551f79 +0x01f:  mov    $0x0,%eax
08551f7e +0x024:  jmp    08552133 <+0x1d9>
08551f83 +0x029:  mov    -0x64(%ebp),%eax
08551f86 +0x02c:  mov    0xc(%ebp),%edx
08551f89 +0x02f:  mov    (%edx),%edx
08551f8b +0x031:  mov    %edx,(%eax)
08551f8d +0x033:  mov    -0x64(%ebp),%eax
08551f90 +0x036:  mov    0xc(%ebp),%edx
08551f93 +0x039:  mov    0x4(%edx),%edx
08551f96 +0x03c:  mov    %edx,0x4(%eax)
08551f99 +0x03f:  mov    -0x64(%ebp),%eax
08551f9c +0x042:  mov    0xc(%ebp),%edx
08551f9f +0x045:  mov    0x8(%edx),%edx
08551fa2 +0x048:  mov    %edx,0x28(%eax)
08551fa5 +0x04b:  mov    -0x64(%ebp),%ebx
08551fa8 +0x04e:  mov    0xc(%ebp),%eax
08551fab +0x051:  mov    0x24(%eax),%eax
08551fae +0x054:  test   %eax,%eax
08551fb0 +0x056:  je     0855201a <+0xc0>
08551fb2 +0x058:  mov    0xc(%ebp),%eax
08551fb5 +0x05b:  mov    0x24(%eax),%eax
08551fb8 +0x05e:  mov    (%eax),%edx
08551fba +0x060:  mov    %edx,0x2c(%ebx)
08551fbd +0x063:  mov    0x4(%eax),%edx
08551fc0 +0x066:  mov    %edx,0x30(%ebx)
08551fc3 +0x069:  mov    0x8(%eax),%edx
08551fc6 +0x06c:  mov    %edx,0x34(%ebx)
08551fc9 +0x06f:  mov    0xc(%eax),%edx
08551fcc +0x072:  mov    %edx,0x38(%ebx)
08551fcf +0x075:  mov    0x10(%eax),%edx
08551fd2 +0x078:  mov    %edx,0x3c(%ebx)
08551fd5 +0x07b:  mov    0x14(%eax),%edx
08551fd8 +0x07e:  mov    %edx,0x40(%ebx)
08551fdb +0x081:  mov    0x18(%eax),%edx
08551fde +0x084:  mov    %edx,0x44(%ebx)
08551fe1 +0x087:  mov    0x1c(%eax),%edx
08551fe4 +0x08a:  mov    %edx,0x48(%ebx)
08551fe7 +0x08d:  mov    0x20(%eax),%edx
08551fea +0x090:  mov    %edx,0x4c(%ebx)
08551fed +0x093:  mov    0x24(%eax),%edx
08551ff0 +0x096:  mov    %edx,0x50(%ebx)
08551ff3 +0x099:  mov    0x28(%eax),%edx
08551ff6 +0x09c:  mov    %edx,0x54(%ebx)
08551ff9 +0x09f:  mov    0x2c(%eax),%edx
08551ffc +0x0a2:  mov    %edx,0x58(%ebx)
08551fff +0x0a5:  mov    0x30(%eax),%edx
08552002 +0x0a8:  mov    %edx,0x5c(%ebx)
08552005 +0x0ab:  mov    0x34(%eax),%edx
08552008 +0x0ae:  mov    %edx,0x60(%ebx)
0855200b +0x0b1:  mov    0x38(%eax),%edx
0855200e +0x0b4:  mov    %edx,0x64(%ebx)
08552011 +0x0b7:  movzbl 0x3c(%eax),%eax
08552015 +0x0bb:  mov    %al,0x68(%ebx)
08552018 +0x0be:  jmp    08552086 <+0x12c>
0855201a +0x0c0:  lea    -0x5d(%ebp),%eax
0855201d +0x0c3:  mov    %eax,(%esp)
08552020 +0x0c6:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08552025 +0x0cb:  mov    -0x5d(%ebp),%eax
08552028 +0x0ce:  mov    %eax,0x2c(%ebx)
0855202b +0x0d1:  mov    -0x59(%ebp),%eax
0855202e +0x0d4:  mov    %eax,0x30(%ebx)
08552031 +0x0d7:  mov    -0x55(%ebp),%eax
08552034 +0x0da:  mov    %eax,0x34(%ebx)
08552037 +0x0dd:  mov    -0x51(%ebp),%eax
0855203a +0x0e0:  mov    %eax,0x38(%ebx)
0855203d +0x0e3:  mov    -0x4d(%ebp),%eax
08552040 +0x0e6:  mov    %eax,0x3c(%ebx)
08552043 +0x0e9:  mov    -0x49(%ebp),%eax
08552046 +0x0ec:  mov    %eax,0x40(%ebx)
08552049 +0x0ef:  mov    -0x45(%ebp),%eax
0855204c +0x0f2:  mov    %eax,0x44(%ebx)
0855204f +0x0f5:  mov    -0x41(%ebp),%eax
08552052 +0x0f8:  mov    %eax,0x48(%ebx)
08552055 +0x0fb:  mov    -0x3d(%ebp),%eax
08552058 +0x0fe:  mov    %eax,0x4c(%ebx)
0855205b +0x101:  mov    -0x39(%ebp),%eax
0855205e +0x104:  mov    %eax,0x50(%ebx)
08552061 +0x107:  mov    -0x35(%ebp),%eax
08552064 +0x10a:  mov    %eax,0x54(%ebx)
08552067 +0x10d:  mov    -0x31(%ebp),%eax
0855206a +0x110:  mov    %eax,0x58(%ebx)
0855206d +0x113:  mov    -0x2d(%ebp),%eax
08552070 +0x116:  mov    %eax,0x5c(%ebx)
08552073 +0x119:  mov    -0x29(%ebp),%eax
08552076 +0x11c:  mov    %eax,0x60(%ebx)
08552079 +0x11f:  mov    -0x25(%ebp),%eax
0855207c +0x122:  mov    %eax,0x64(%ebx)
0855207f +0x125:  movzbl -0x21(%ebp),%eax
08552083 +0x129:  mov    %al,0x68(%ebx)
08552086 +0x12c:  mov    -0x64(%ebp),%eax
08552089 +0x12f:  mov    0xc(%ebp),%edx
0855208c +0x132:  mov    0x18(%edx),%edx
0855208f +0x135:  mov    %edx,0x6c(%eax)
08552092 +0x138:  mov    0xc(%ebp),%eax
08552095 +0x13b:  mov    0x20(%eax),%eax
08552098 +0x13e:  mov    -0x64(%ebp),%edx
0855209b +0x141:  add    $0x8,%edx
0855209e +0x144:  movl   $0x1d,0x8(%esp)
085520a6 +0x14c:  mov    %eax,0x4(%esp)
085520aa +0x150:  mov    %edx,(%esp)
085520ad +0x153:  call   0807d8d0 <_init+0x1c8>
085520b2 +0x158:  mov    -0x64(%ebp),%eax
085520b5 +0x15b:  mov    0xc(%ebp),%edx
085520b8 +0x15e:  mov    0x14(%edx),%edx
085520bb +0x161:  mov    %edx,0x70(%eax)
085520be +0x164:  mov    -0x64(%ebp),%eax
085520c1 +0x167:  mov    0xc(%ebp),%edx
085520c4 +0x16a:  movzbl 0x1c(%edx),%edx
085520c8 +0x16e:  mov    %dl,0x74(%eax)
085520cb +0x171:  mov    -0x64(%ebp),%eax
085520ce +0x174:  mov    0xc(%ebp),%edx
085520d1 +0x177:  mov    0xc(%edx),%edx
085520d4 +0x17a:  mov    %edx,0x78(%eax)
085520d7 +0x17d:  mov    0xc(%ebp),%edx
085520da +0x180:  lea    -0x10(%ebp),%eax
085520dd +0x183:  lea    -0x64(%ebp),%ecx
085520e0 +0x186:  mov    %ecx,0x8(%esp)
085520e4 +0x18a:  mov    %edx,0x4(%esp)
085520e8 +0x18e:  mov    %eax,(%esp)
085520eb +0x191:  call   0855858f <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x10f0>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x10f0
085520f0 +0x196:  sub    $0x4,%esp
085520f3 +0x199:  lea    -0x10(%ebp),%eax
085520f6 +0x19c:  mov    %eax,0x4(%esp)
085520fa +0x1a0:  lea    -0x18(%ebp),%eax
085520fd +0x1a3:  mov    %eax,(%esp)
08552100 +0x1a6:  call   085585ce <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x112f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x112f
08552105 +0x1ab:  mov    0x8(%ebp),%eax
08552108 +0x1ae:  lea    0x40(%eax),%ecx
0855210b +0x1b1:  lea    -0x20(%ebp),%eax
0855210e +0x1b4:  lea    -0x18(%ebp),%edx
08552111 +0x1b7:  mov    %edx,0x8(%esp)
08552115 +0x1bb:  mov    %ecx,0x4(%esp)
08552119 +0x1bf:  mov    %eax,(%esp)
0855211c +0x1c2:  call   085585fe <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x115f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x115f
08552121 +0x1c7:  sub    $0x4,%esp
08552124 +0x1ca:  mov    -0x64(%ebp),%eax
08552127 +0x1cd:  mov    0xc(%ebp),%edx
0855212a +0x1d0:  mov    0x10(%edx),%edx
0855212d +0x1d3:  mov    %edx,0x7c(%eax)
08552130 +0x1d6:  mov    -0x64(%ebp),%eax
08552133 +0x1d9:  mov    -0x4(%ebp),%ebx
08552136 +0x1dc:  leave
08552137 +0x1dd:  ret
```

## 反编译 C

```c
// WongWork::CMailBox::AddNewMail @ 0x8551f5a

/* WongWork::CMailBox::AddNewMail(WongWork::CMailBox::stAddNewMailInput const&) */

undefined4 * __thiscall WongWork::CMailBox::AddNewMail(CMailBox *this,stAddNewMailInput *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined1 local_25;
  pair local_24 [8];
  pair<unsigned_int_const,WongWork::CMailBox::CMail*> local_1c [8];
  uint local_14 [3];
  
  puVar2 = (undefined4 *)
           StaticPool<WongWork::CMailBox::CMail,20>::Acquire
                     ((StaticPool<WongWork::CMailBox::CMail,20> *)(this + 0x10));
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = *(undefined4 *)param_1;
    puVar2[1] = *(undefined4 *)(param_1 + 4);
    puVar2[10] = *(undefined4 *)(param_1 + 8);
    if (*(int *)(param_1 + 0x24) == 0) {
      Inven_Item::Inven_Item((Inven_Item *)&local_61);
      puVar2[0xb] = local_61;
      puVar2[0xc] = local_5d;
      puVar2[0xd] = local_59;
      puVar2[0xe] = local_55;
      puVar2[0xf] = local_51;
      puVar2[0x10] = local_4d;
      puVar2[0x11] = local_49;
      puVar2[0x12] = local_45;
      puVar2[0x13] = local_41;
      puVar2[0x14] = local_3d;
      puVar2[0x15] = local_39;
      puVar2[0x16] = local_35;
      puVar2[0x17] = local_31;
      puVar2[0x18] = local_2d;
      puVar2[0x19] = local_29;
      *(undefined1 *)(puVar2 + 0x1a) = local_25;
    }
    else {
      puVar1 = *(undefined4 **)(param_1 + 0x24);
      puVar2[0xb] = *puVar1;
      puVar2[0xc] = puVar1[1];
      puVar2[0xd] = puVar1[2];
      puVar2[0xe] = puVar1[3];
      puVar2[0xf] = puVar1[4];
      puVar2[0x10] = puVar1[5];
      puVar2[0x11] = puVar1[6];
      puVar2[0x12] = puVar1[7];
      puVar2[0x13] = puVar1[8];
      puVar2[0x14] = puVar1[9];
      puVar2[0x15] = puVar1[10];
      puVar2[0x16] = puVar1[0xb];
      puVar2[0x17] = puVar1[0xc];
      puVar2[0x18] = puVar1[0xd];
      puVar2[0x19] = puVar1[0xe];
      *(undefined1 *)(puVar2 + 0x1a) = *(undefined1 *)(puVar1 + 0xf);
    }
    puVar2[0x1b] = *(undefined4 *)(param_1 + 0x18);
    strncpy((char *)(puVar2 + 2),*(char **)(param_1 + 0x20),0x1d);
    puVar2[0x1c] = *(undefined4 *)(param_1 + 0x14);
    *(stAddNewMailInput *)(puVar2 + 0x1d) = param_1[0x1c];
    puVar2[0x1e] = *(undefined4 *)(param_1 + 0xc);
    std::make_pair<unsigned_int_const&,WongWork::CMailBox::CMail*&>(local_14,(CMail **)param_1);
    std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>::
    pair<unsigned_int,WongWork::CMailBox::CMail*>(local_1c,(pair *)local_14);
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::insert(local_24);
    puVar2[0x1f] = *(undefined4 *)(param_1 + 0x10);
  }
  return puVar2;
}
```
