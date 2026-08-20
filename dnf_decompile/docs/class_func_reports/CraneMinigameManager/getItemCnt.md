# getItemCnt

`_ZN20CraneMinigameManager10getItemCntEi`

`CraneMinigameManager::getItemCnt(int)`

| 类 | 地址 |
|---|---|
| `CraneMinigameManager` | `0x080ebd44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ebd44  _ZN20CraneMinigameManager10getItemCntEi
#           CraneMinigameManager::getItemCnt(int)
# range [0x080ebd44, 0x080ebd79]
080ebd44 +0x00:  push   %ebp
080ebd45 +0x01:  mov    %esp,%ebp
080ebd47 +0x03:  sub    $0x28,%esp
080ebd4a +0x06:  mov    0xc(%ebp),%eax
080ebd4d +0x09:  movswl %ax,%edx
080ebd50 +0x0c:  mov    0x8(%ebp),%eax
080ebd53 +0x0f:  mov    %edx,0x4(%esp)
080ebd57 +0x13:  mov    %eax,(%esp)
080ebd5a +0x16:  call   088e38d6 <_ZN19CraneMinigameScript7getItemEs>  ; CraneMinigameScript::getItem(short)
080ebd5f +0x1b:  mov    %eax,-0xc(%ebp)
080ebd62 +0x1e:  cmpl   $0x0,-0xc(%ebp)
080ebd66 +0x22:  je     080ebd72 <+0x2e>
080ebd68 +0x24:  mov    -0xc(%ebp),%eax
080ebd6b +0x27:  movzwl 0x8(%eax),%eax
080ebd6f +0x2b:  cwtl
080ebd70 +0x2c:  jmp    080ebd77 <+0x33>
080ebd72 +0x2e:  mov    $0x0,%eax
080ebd77 +0x33:  leave
080ebd78 +0x34:  ret
080ebd79 +0x35:  nop
```

## 反编译 C

```c
// CraneMinigameManager::getItemCnt @ 0x80ebd44

/* CraneMinigameManager::getItemCnt(int) */

int __thiscall CraneMinigameManager::getItemCnt(CraneMinigameManager *this,int param_1)

{
  int iVar1;
  
  iVar1 = CraneMinigameScript::getItem((CraneMinigameScript *)this,(short)param_1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(short *)(iVar1 + 8);
  }
  return iVar1;
}
```
