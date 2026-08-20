# handleDropItem

`_ZN8WongWork10CBossTower14handleDropItemEP5CUseriicii`

`WongWork::CBossTower::handleDropItem(CUser*, int, int, char, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x08143e5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08143e5e  _ZN8WongWork10CBossTower14handleDropItemEP5CUseriicii
#           WongWork::CBossTower::handleDropItem(CUser*, int, int, char, int, int)
# range [0x08143e5e, 0x08143ebb]
08143e5e +0x00:  push   %ebp
08143e5f +0x01:  mov    %esp,%ebp
08143e61 +0x03:  sub    $0x48,%esp
08143e64 +0x06:  mov    0x18(%ebp),%eax
08143e67 +0x09:  mov    %al,-0x1c(%ebp)
08143e6a +0x0c:  movsbl -0x1c(%ebp),%edx
08143e6e +0x10:  mov    0x8(%ebp),%eax
08143e71 +0x13:  mov    0x20(%ebp),%ecx
08143e74 +0x16:  mov    %ecx,0x18(%esp)
08143e78 +0x1a:  mov    0x1c(%ebp),%ecx
08143e7b +0x1d:  mov    %ecx,0x14(%esp)
08143e7f +0x21:  mov    %edx,0x10(%esp)
08143e83 +0x25:  mov    0x14(%ebp),%edx
08143e86 +0x28:  mov    %edx,0xc(%esp)
08143e8a +0x2c:  mov    0x10(%ebp),%edx
08143e8d +0x2f:  mov    %edx,0x8(%esp)
08143e91 +0x33:  mov    0xc(%ebp),%edx
08143e94 +0x36:  mov    %edx,0x4(%esp)
08143e98 +0x3a:  mov    %eax,(%esp)
08143e9b +0x3d:  call   0814ff4a <_ZN8WongWork10CBossStage14handleDropItemEP5CUseriicii>  ; WongWork::CBossStage::handleDropItem(CUser*, int, int, char, int, int)
08143ea0 +0x42:  mov    %al,-0x9(%ebp)
08143ea3 +0x45:  movzbl -0x9(%ebp),%eax
08143ea7 +0x49:  xor    $0x1,%eax
08143eaa +0x4c:  test   %al,%al
08143eac +0x4e:  je     08143eb5 <+0x57>
08143eae +0x50:  mov    $0x0,%eax
08143eb3 +0x55:  jmp    08143eba <+0x5c>
08143eb5 +0x57:  mov    $0x1,%eax
08143eba +0x5c:  leave
08143ebb +0x5d:  ret
```

## 反编译 C

```c
// WongWork::CBossTower::handleDropItem @ 0x8143e5e

/* WongWork::CBossTower::handleDropItem(CUser*, int, int, char, int, int) */

bool __thiscall
WongWork::CBossTower::handleDropItem
          (CBossTower *this,CUser *param_1,int param_2,int param_3,char param_4,int param_5,
          int param_6)

{
  char cVar1;
  
  cVar1 = CBossStage::handleDropItem
                    ((CBossStage *)this,param_1,param_2,param_3,param_4,param_5,param_6);
  return cVar1 == '\x01';
}
```
