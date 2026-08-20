# _ResetSlot

`_ZN6CCargo10_ResetSlotEi14eItemDelReason`

`CCargo::_ResetSlot(int, eItemDelReason)`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850b1a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850b1a0  _ZN6CCargo10_ResetSlotEi14eItemDelReason
#           CCargo::_ResetSlot(int, eItemDelReason)
# range [0x0850b1a0, 0x0850b2b3]
0850b1a0 +0x000:  push   %ebp
0850b1a1 +0x001:  mov    %esp,%ebp
0850b1a3 +0x003:  push   %ebx
0850b1a4 +0x004:  sub    $0x64,%esp
0850b1a7 +0x007:  mov    0x8(%ebp),%eax
0850b1aa +0x00a:  mov    0x4(%eax),%edx
0850b1ad +0x00d:  mov    0xc(%ebp),%eax
0850b1b0 +0x010:  imul   $0x3d,%eax,%eax
0850b1b3 +0x013:  lea    (%edx,%eax,1),%eax
0850b1b6 +0x016:  mov    (%eax),%edx
0850b1b8 +0x018:  mov    %edx,-0x45(%ebp)
0850b1bb +0x01b:  mov    0x4(%eax),%edx
0850b1be +0x01e:  mov    %edx,-0x41(%ebp)
0850b1c1 +0x021:  mov    0x8(%eax),%edx
0850b1c4 +0x024:  mov    %edx,-0x3d(%ebp)
0850b1c7 +0x027:  mov    0xc(%eax),%edx
0850b1ca +0x02a:  mov    %edx,-0x39(%ebp)
0850b1cd +0x02d:  mov    0x10(%eax),%edx
0850b1d0 +0x030:  mov    %edx,-0x35(%ebp)
0850b1d3 +0x033:  mov    0x14(%eax),%edx
0850b1d6 +0x036:  mov    %edx,-0x31(%ebp)
0850b1d9 +0x039:  mov    0x18(%eax),%edx
0850b1dc +0x03c:  mov    %edx,-0x2d(%ebp)
0850b1df +0x03f:  mov    0x1c(%eax),%edx
0850b1e2 +0x042:  mov    %edx,-0x29(%ebp)
0850b1e5 +0x045:  mov    0x20(%eax),%edx
0850b1e8 +0x048:  mov    %edx,-0x25(%ebp)
0850b1eb +0x04b:  mov    0x24(%eax),%edx
0850b1ee +0x04e:  mov    %edx,-0x21(%ebp)
0850b1f1 +0x051:  mov    0x28(%eax),%edx
0850b1f4 +0x054:  mov    %edx,-0x1d(%ebp)
0850b1f7 +0x057:  mov    0x2c(%eax),%edx
0850b1fa +0x05a:  mov    %edx,-0x19(%ebp)
0850b1fd +0x05d:  mov    0x30(%eax),%edx
0850b200 +0x060:  mov    %edx,-0x15(%ebp)
0850b203 +0x063:  mov    0x34(%eax),%edx
0850b206 +0x066:  mov    %edx,-0x11(%ebp)
0850b209 +0x069:  mov    0x38(%eax),%edx
0850b20c +0x06c:  mov    %edx,-0xd(%ebp)
0850b20f +0x06f:  movzbl 0x3c(%eax),%eax
0850b213 +0x073:  mov    %al,-0x9(%ebp)
0850b216 +0x076:  mov    0x8(%ebp),%eax
0850b219 +0x079:  mov    0x4(%eax),%edx
0850b21c +0x07c:  mov    0xc(%ebp),%eax
0850b21f +0x07f:  imul   $0x3d,%eax,%eax
0850b222 +0x082:  lea    (%edx,%eax,1),%eax
0850b225 +0x085:  mov    %eax,(%esp)
0850b228 +0x088:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0850b22d +0x08d:  lea    -0x45(%ebp),%eax
0850b230 +0x090:  mov    %eax,(%esp)
0850b233 +0x093:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
0850b238 +0x098:  test   %al,%al
0850b23a +0x09a:  je     0850b26f <+0xcf>
0850b23c +0x09c:  mov    -0x43(%ebp),%eax
0850b23f +0x09f:  mov    0x8(%ebp),%edx
0850b242 +0x0a2:  mov    (%edx),%edx
0850b244 +0x0a4:  lea    0x79700(%edx),%ecx
0850b24a +0x0aa:  mov    0x10(%ebp),%edx
0850b24d +0x0ad:  mov    %edx,0x10(%esp)
0850b251 +0x0b1:  movl   $0x0,0xc(%esp)
0850b259 +0x0b9:  movl   $0x1,0x8(%esp)
0850b261 +0x0c1:  mov    %eax,0x4(%esp)
0850b265 +0x0c5:  mov    %ecx,(%esp)
0850b268 +0x0c8:  call   08683d20 <_ZN15cUserHistoryLog12ItemDelCargoEiii14eItemDelReason>  ; cUserHistoryLog::ItemDelCargo(int, int, int, eItemDelReason)
0850b26d +0x0cd:  jmp    0850b29f <+0xff>
0850b26f +0x0cf:  mov    -0x3e(%ebp),%edx
0850b272 +0x0d2:  mov    -0x43(%ebp),%eax
0850b275 +0x0d5:  mov    0x8(%ebp),%ecx
0850b278 +0x0d8:  mov    (%ecx),%ecx
0850b27a +0x0da:  lea    0x79700(%ecx),%ebx
0850b280 +0x0e0:  mov    0x10(%ebp),%ecx
0850b283 +0x0e3:  mov    %ecx,0x10(%esp)
0850b287 +0x0e7:  movl   $0x0,0xc(%esp)
0850b28f +0x0ef:  mov    %edx,0x8(%esp)
0850b293 +0x0f3:  mov    %eax,0x4(%esp)
0850b297 +0x0f7:  mov    %ebx,(%esp)
0850b29a +0x0fa:  call   08683d20 <_ZN15cUserHistoryLog12ItemDelCargoEiii14eItemDelReason>  ; cUserHistoryLog::ItemDelCargo(int, int, int, eItemDelReason)
0850b29f +0x0ff:  mov    0x8(%ebp),%eax
0850b2a2 +0x102:  mov    0x8(%eax),%eax
0850b2a5 +0x105:  lea    -0x1(%eax),%edx
0850b2a8 +0x108:  mov    0x8(%ebp),%eax
0850b2ab +0x10b:  mov    %edx,0x8(%eax)
0850b2ae +0x10e:  add    $0x64,%esp
0850b2b1 +0x111:  pop    %ebx
0850b2b2 +0x112:  pop    %ebp
0850b2b3 +0x113:  ret
```

## 反编译 C

```c
// CCargo::_ResetSlot @ 0x850b1a0

/* CCargo::_ResetSlot(int, eItemDelReason) */

void __thiscall CCargo::_ResetSlot(CCargo *this,int param_1,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 local_49;
  undefined2 uStack_47;
  undefined2 local_45;
  undefined1 uStack_43;
  undefined4 uStack_42;
  undefined1 uStack_3e;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined4 local_15;
  undefined4 local_11;
  undefined1 local_d;
  
  puVar1 = (undefined4 *)(*(int *)(this + 4) + param_1 * 0x3d);
  local_49 = (undefined2)*puVar1;
  uStack_47 = (undefined2)((uint)*puVar1 >> 0x10);
  uVar2 = puVar1[1];
  local_45 = (undefined2)uVar2;
  uStack_43 = (undefined1)((uint)uVar2 >> 0x10);
  uStack_42._1_3_ = (undefined3)puVar1[2];
  uStack_42 = CONCAT31(uStack_42._1_3_,(char)((uint)uVar2 >> 0x18));
  uStack_3e = (undefined1)((uint)puVar1[2] >> 0x18);
  local_3d = puVar1[3];
  local_39 = puVar1[4];
  local_35 = puVar1[5];
  local_31 = puVar1[6];
  local_2d = puVar1[7];
  local_29 = puVar1[8];
  local_25 = puVar1[9];
  local_21 = puVar1[10];
  local_1d = puVar1[0xb];
  local_19 = puVar1[0xc];
  local_15 = puVar1[0xd];
  local_11 = puVar1[0xe];
  local_d = *(undefined1 *)(puVar1 + 0xf);
  Inven_Item::reset((Inven_Item *)(*(int *)(this + 4) + param_1 * 0x3d));
  cVar3 = Inven_Item::isEquipableItemType((Inven_Item *)&local_49);
  if (cVar3 == '\0') {
    cUserHistoryLog::ItemDelCargo
              ((cUserHistoryLog *)(*(int *)this + 0x79700),CONCAT22(local_45,uStack_47),uStack_42,0,
               param_3);
  }
  else {
    cUserHistoryLog::ItemDelCargo
              ((cUserHistoryLog *)(*(int *)this + 0x79700),CONCAT22(local_45,uStack_47),1,0,param_3)
    ;
  }
  *(int *)(this + 8) = *(int *)(this + 8) + -1;
  return;
}
```
