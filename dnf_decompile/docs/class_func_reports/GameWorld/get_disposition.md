# get_disposition

`_ZN9GameWorld15get_dispositionEiiPN11pvp_assault12CDispositionE`

`GameWorld::get_disposition(int, int, pvp_assault::CDisposition*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c46ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c46ba  _ZN9GameWorld15get_dispositionEiiPN11pvp_assault12CDispositionE
#           GameWorld::get_disposition(int, int, pvp_assault::CDisposition*)
# range [0x086c46ba, 0x086c471d]
086c46ba +0x00:  push   %ebp
086c46bb +0x01:  mov    %esp,%ebp
086c46bd +0x03:  push   %ebx
086c46be +0x04:  sub    $0x14,%esp
086c46c1 +0x07:  mov    0x10(%ebp),%eax
086c46c4 +0x0a:  mov    %eax,0x8(%esp)
086c46c8 +0x0e:  mov    0xc(%ebp),%eax
086c46cb +0x11:  mov    %eax,0x4(%esp)
086c46cf +0x15:  mov    0x8(%ebp),%eax
086c46d2 +0x18:  mov    %eax,(%esp)
086c46d5 +0x1b:  call   086c49ee <_ZN9GameWorld16check_valid_areaEii>  ; GameWorld::check_valid_area(int, int)
086c46da +0x20:  test   %al,%al
086c46dc +0x22:  je     086c4713 <+0x59>
086c46de +0x24:  mov    0x14(%ebp),%eax
086c46e1 +0x27:  mov    (%eax),%eax
086c46e3 +0x29:  mov    (%eax),%ebx
086c46e5 +0x2b:  mov    0x8(%ebp),%eax
086c46e8 +0x2e:  mov    0x1c(%eax),%edx
086c46eb +0x31:  mov    0xc(%ebp),%eax
086c46ee +0x34:  imul   $0x34,%eax,%eax
086c46f1 +0x37:  add    %eax,%edx
086c46f3 +0x39:  mov    0x10(%ebp),%eax
086c46f6 +0x3c:  mov    %eax,0x4(%esp)
086c46fa +0x40:  mov    %edx,(%esp)
086c46fd +0x43:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c4702 +0x48:  add    $0x7c,%eax
086c4705 +0x4b:  mov    %eax,0x4(%esp)
086c4709 +0x4f:  mov    0x14(%ebp),%eax
086c470c +0x52:  mov    %eax,(%esp)
086c470f +0x55:  call   *%ebx
086c4711 +0x57:  jmp    086c4718 <+0x5e>
086c4713 +0x59:  mov    $0x0,%eax
086c4718 +0x5e:  add    $0x14,%esp
086c471b +0x61:  pop    %ebx
086c471c +0x62:  pop    %ebp
086c471d +0x63:  ret
```

## 反编译 C

```c
// GameWorld::get_disposition @ 0x86c46ba

/* GameWorld::get_disposition(int, int, pvp_assault::CDisposition*) */

undefined4 __thiscall
GameWorld::get_disposition(GameWorld *this,int param_1,int param_2,CDisposition *param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  cVar2 = check_valid_area(this,param_1,param_2);
  if (cVar2 == '\0') {
    uVar4 = 0;
  }
  else {
    pcVar1 = (code *)**(undefined4 **)param_3;
    iVar3 = Village::getArea((Village *)(*(int *)(this + 0x1c) + param_1 * 0x34),param_2);
    uVar4 = (*pcVar1)(param_3,iVar3 + 0x7c);
  }
  return uVar4;
}
```
