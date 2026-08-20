# parseStage

`_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi`

`advancealtar::DB_Load::parseStage(char*, advancealtar::_Stage*, int)`

| 类 | 地址 |
|---|---|
| `advancealtar::DB_Load` | `0x0813e3e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813e3e8  _ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi
#           advancealtar::DB_Load::parseStage(char*, advancealtar::_Stage*, int)
# range [0x0813e3e8, 0x0813e541]
0813e3e8 +0x000:  push   %ebp
0813e3e9 +0x001:  mov    %esp,%ebp
0813e3eb +0x003:  push   %ebx
0813e3ec +0x004:  sub    $0x34,%esp
0813e3ef +0x007:  cmpl   $0x0,0xc(%ebp)
0813e3f3 +0x00b:  je     0813e3fb <+0x13>
0813e3f5 +0x00d:  cmpl   $0x0,0x10(%ebp)
0813e3f9 +0x011:  jne    0813e405 <+0x1d>
0813e3fb +0x013:  mov    $0x0,%eax
0813e400 +0x018:  jmp    0813e53b <+0x153>
0813e405 +0x01d:  movl   $0x0,-0x1c(%ebp)
0813e40c +0x024:  lea    -0x1c(%ebp),%eax
0813e40f +0x027:  mov    %eax,0x8(%esp)
0813e413 +0x02b:  movl   $"|",0x4(%esp)
0813e41b +0x033:  mov    0xc(%ebp),%eax
0813e41e +0x036:  mov    %eax,(%esp)
0813e421 +0x039:  call   0807e150 <_init+0xa48>
0813e426 +0x03e:  mov    %eax,-0x18(%ebp)
0813e429 +0x041:  movl   $0x0,-0x14(%ebp)
0813e430 +0x048:  jmp    0813e514 <+0x12c>
0813e435 +0x04d:  movl   $0x0,-0x20(%ebp)
0813e43c +0x054:  lea    -0x20(%ebp),%eax
0813e43f +0x057:  mov    %eax,0x8(%esp)
0813e443 +0x05b:  movl   $",",0x4(%esp)
0813e44b +0x063:  mov    -0x18(%ebp),%eax
0813e44e +0x066:  mov    %eax,(%esp)
0813e451 +0x069:  call   0807e150 <_init+0xa48>
0813e456 +0x06e:  mov    %eax,-0x10(%ebp)
0813e459 +0x071:  movl   $0x0,-0xc(%ebp)
0813e460 +0x078:  jmp    0813e4cf <+0xe7>
0813e462 +0x07a:  cmpl   $0x0,-0x10(%ebp)
0813e466 +0x07e:  je     0813e4f1 <+0x109>
0813e46c +0x084:  mov    -0xc(%ebp),%eax
0813e46f +0x087:  test   %eax,%eax
0813e471 +0x089:  je     0813e47a <+0x92>
0813e473 +0x08b:  cmp    $0x1,%eax
0813e476 +0x08e:  je     0813e494 <+0xac>
0813e478 +0x090:  jmp    0813e4ad <+0xc5>
0813e47a +0x092:  mov    -0x14(%ebp),%eax
0813e47d +0x095:  shl    $0x3,%eax
0813e480 +0x098:  mov    %eax,%ebx
0813e482 +0x09a:  add    0x10(%ebp),%ebx
0813e485 +0x09d:  mov    -0x10(%ebp),%eax
0813e488 +0x0a0:  mov    %eax,(%esp)
0813e48b +0x0a3:  call   0807e6f0 <_init+0xfe8>
0813e490 +0x0a8:  mov    %eax,(%ebx)
0813e492 +0x0aa:  jmp    0813e4ad <+0xc5>
0813e494 +0x0ac:  mov    -0x14(%ebp),%eax
0813e497 +0x0af:  shl    $0x3,%eax
0813e49a +0x0b2:  mov    %eax,%ebx
0813e49c +0x0b4:  add    0x10(%ebp),%ebx
0813e49f +0x0b7:  mov    -0x10(%ebp),%eax
0813e4a2 +0x0ba:  mov    %eax,(%esp)
0813e4a5 +0x0bd:  call   0807e6f0 <_init+0xfe8>
0813e4aa +0x0c2:  mov    %eax,0x4(%ebx)
0813e4ad +0x0c5:  lea    -0x20(%ebp),%eax
0813e4b0 +0x0c8:  mov    %eax,0x8(%esp)
0813e4b4 +0x0cc:  movl   $",",0x4(%esp)
0813e4bc +0x0d4:  movl   $0x0,(%esp)
0813e4c3 +0x0db:  call   0807e150 <_init+0xa48>
0813e4c8 +0x0e0:  mov    %eax,-0x10(%ebp)
0813e4cb +0x0e3:  addl   $0x1,-0xc(%ebp)
0813e4cf +0x0e7:  cmpl   $0x0,-0x10(%ebp)
0813e4d3 +0x0eb:  je     0813e4e2 <+0xfa>
0813e4d5 +0x0ed:  cmpl   $0x1,-0xc(%ebp)
0813e4d9 +0x0f1:  jg     0813e4e2 <+0xfa>
0813e4db +0x0f3:  mov    $0x1,%eax
0813e4e0 +0x0f8:  jmp    0813e4e7 <+0xff>
0813e4e2 +0x0fa:  mov    $0x0,%eax
0813e4e7 +0x0ff:  test   %al,%al
0813e4e9 +0x101:  jne    0813e462 <+0x7a>
0813e4ef +0x107:  jmp    0813e4f2 <+0x10a>
0813e4f1 +0x109:  nop
0813e4f2 +0x10a:  lea    -0x1c(%ebp),%eax
0813e4f5 +0x10d:  mov    %eax,0x8(%esp)
0813e4f9 +0x111:  movl   $"|",0x4(%esp)
0813e501 +0x119:  movl   $0x0,(%esp)
0813e508 +0x120:  call   0807e150 <_init+0xa48>
0813e50d +0x125:  mov    %eax,-0x18(%ebp)
0813e510 +0x128:  addl   $0x1,-0x14(%ebp)
0813e514 +0x12c:  cmpl   $0x0,-0x18(%ebp)
0813e518 +0x130:  je     0813e529 <+0x141>
0813e51a +0x132:  mov    -0x14(%ebp),%eax
0813e51d +0x135:  cmp    0x14(%ebp),%eax
0813e520 +0x138:  jge    0813e529 <+0x141>
0813e522 +0x13a:  mov    $0x1,%eax
0813e527 +0x13f:  jmp    0813e52e <+0x146>
0813e529 +0x141:  mov    $0x0,%eax
0813e52e +0x146:  test   %al,%al
0813e530 +0x148:  jne    0813e435 <+0x4d>
0813e536 +0x14e:  mov    $0x1,%eax
0813e53b +0x153:  add    $0x34,%esp
0813e53e +0x156:  pop    %ebx
0813e53f +0x157:  pop    %ebp
0813e540 +0x158:  ret
0813e541 +0x159:  nop
```

## 反编译 C

```c
// advancealtar::DB_Load::parseStage @ 0x813e3e8

/* advancealtar::DB_Load::parseStage(char*, advancealtar::_Stage*, int) */

undefined4 __thiscall
advancealtar::DB_Load::parseStage(DB_Load *this,char *param_1,_Stage *param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *local_24;
  char *local_20;
  char *local_1c;
  int local_18;
  char *local_14;
  int local_10;
  
  if ((param_1 == (char *)0x0) || (param_2 == (_Stage *)0x0)) {
    uVar2 = 0;
  }
  else {
    local_20 = (char *)0x0;
    local_1c = strtok_r(param_1,"|",&local_20);
    local_18 = 0;
    while( true ) {
      if ((local_1c == (char *)0x0) || (param_3 <= local_18)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      local_24 = (char *)0x0;
      local_14 = strtok_r(local_1c,",",&local_24);
      local_10 = 0;
      while( true ) {
        if ((local_14 == (char *)0x0) || (1 < local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((!bVar1) || (local_14 == (char *)0x0)) break;
        if (local_10 == 0) {
          iVar3 = local_18 * 8;
          iVar4 = atoi(local_14);
          *(int *)(param_2 + iVar3) = iVar4;
        }
        else if (local_10 == 1) {
          iVar3 = local_18 * 8;
          iVar4 = atoi(local_14);
          *(int *)(param_2 + iVar3 + 4) = iVar4;
        }
        local_14 = strtok_r((char *)0x0,",",&local_24);
        local_10 = local_10 + 1;
      }
      local_1c = strtok_r((char *)0x0,"|",&local_20);
      local_18 = local_18 + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}
```
