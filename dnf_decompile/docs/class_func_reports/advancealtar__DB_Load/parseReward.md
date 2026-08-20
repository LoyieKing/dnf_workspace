# parseReward

`_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi`

`advancealtar::DB_Load::parseReward(char*, advancealtar::_Reward*, int)`

| 类 | 地址 |
|---|---|
| `advancealtar::DB_Load` | `0x0813e8cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813e8cc  _ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi
#           advancealtar::DB_Load::parseReward(char*, advancealtar::_Reward*, int)
# range [0x0813e8cc, 0x0813ea45]
0813e8cc +0x000:  push   %ebp
0813e8cd +0x001:  mov    %esp,%ebp
0813e8cf +0x003:  push   %ebx
0813e8d0 +0x004:  sub    $0x34,%esp
0813e8d3 +0x007:  cmpl   $0x0,0xc(%ebp)
0813e8d7 +0x00b:  je     0813e8df <+0x13>
0813e8d9 +0x00d:  cmpl   $0x0,0x10(%ebp)
0813e8dd +0x011:  jne    0813e8e9 <+0x1d>
0813e8df +0x013:  mov    $0x0,%eax
0813e8e4 +0x018:  jmp    0813ea40 <+0x174>
0813e8e9 +0x01d:  movl   $0x0,-0x1c(%ebp)
0813e8f0 +0x024:  lea    -0x1c(%ebp),%eax
0813e8f3 +0x027:  mov    %eax,0x8(%esp)
0813e8f7 +0x02b:  movl   $"|",0x4(%esp)
0813e8ff +0x033:  mov    0xc(%ebp),%eax
0813e902 +0x036:  mov    %eax,(%esp)
0813e905 +0x039:  call   0807e150 <_init+0xa48>
0813e90a +0x03e:  mov    %eax,-0x18(%ebp)
0813e90d +0x041:  movl   $0x0,-0x14(%ebp)
0813e914 +0x048:  jmp    0813ea19 <+0x14d>
0813e919 +0x04d:  movl   $0x0,-0x20(%ebp)
0813e920 +0x054:  lea    -0x20(%ebp),%eax
0813e923 +0x057:  mov    %eax,0x8(%esp)
0813e927 +0x05b:  movl   $",",0x4(%esp)
0813e92f +0x063:  mov    -0x18(%ebp),%eax
0813e932 +0x066:  mov    %eax,(%esp)
0813e935 +0x069:  call   0807e150 <_init+0xa48>
0813e93a +0x06e:  mov    %eax,-0x10(%ebp)
0813e93d +0x071:  movl   $0x0,-0xc(%ebp)
0813e944 +0x078:  jmp    0813e9d4 <+0x108>
0813e949 +0x07d:  cmpl   $0x0,-0x10(%ebp)
0813e94d +0x081:  je     0813e9f6 <+0x12a>
0813e953 +0x087:  mov    -0xc(%ebp),%eax
0813e956 +0x08a:  test   %eax,%eax
0813e958 +0x08c:  je     0813e961 <+0x95>
0813e95a +0x08e:  cmp    $0x1,%eax
0813e95d +0x091:  je     0813e97f <+0xb3>
0813e95f +0x093:  jmp    0813e9b2 <+0xe6>
0813e961 +0x095:  mov    -0x14(%ebp),%edx
0813e964 +0x098:  mov    %edx,%eax
0813e966 +0x09a:  shl    $0x2,%eax
0813e969 +0x09d:  add    %edx,%eax
0813e96b +0x09f:  mov    %eax,%ebx
0813e96d +0x0a1:  add    0x10(%ebp),%ebx
0813e970 +0x0a4:  mov    -0x10(%ebp),%eax
0813e973 +0x0a7:  mov    %eax,(%esp)
0813e976 +0x0aa:  call   0807e6f0 <_init+0xfe8>
0813e97b +0x0af:  mov    %eax,(%ebx)
0813e97d +0x0b1:  jmp    0813e9b2 <+0xe6>
0813e97f +0x0b3:  mov    -0x10(%ebp),%eax
0813e982 +0x0b6:  mov    %eax,(%esp)
0813e985 +0x0b9:  call   0807e6f0 <_init+0xfe8>
0813e98a +0x0be:  test   %eax,%eax
0813e98c +0x0c0:  jne    0813e9a1 <+0xd5>
0813e98e +0x0c2:  mov    -0x14(%ebp),%edx
0813e991 +0x0c5:  mov    %edx,%eax
0813e993 +0x0c7:  shl    $0x2,%eax
0813e996 +0x0ca:  add    %edx,%eax
0813e998 +0x0cc:  add    0x10(%ebp),%eax
0813e99b +0x0cf:  movb   $0x0,0x4(%eax)
0813e99f +0x0d3:  jmp    0813e9b2 <+0xe6>
0813e9a1 +0x0d5:  mov    -0x14(%ebp),%edx
0813e9a4 +0x0d8:  mov    %edx,%eax
0813e9a6 +0x0da:  shl    $0x2,%eax
0813e9a9 +0x0dd:  add    %edx,%eax
0813e9ab +0x0df:  add    0x10(%ebp),%eax
0813e9ae +0x0e2:  movb   $0x1,0x4(%eax)
0813e9b2 +0x0e6:  lea    -0x20(%ebp),%eax
0813e9b5 +0x0e9:  mov    %eax,0x8(%esp)
0813e9b9 +0x0ed:  movl   $",",0x4(%esp)
0813e9c1 +0x0f5:  movl   $0x0,(%esp)
0813e9c8 +0x0fc:  call   0807e150 <_init+0xa48>
0813e9cd +0x101:  mov    %eax,-0x10(%ebp)
0813e9d0 +0x104:  addl   $0x1,-0xc(%ebp)
0813e9d4 +0x108:  cmpl   $0x0,-0x10(%ebp)
0813e9d8 +0x10c:  je     0813e9e7 <+0x11b>
0813e9da +0x10e:  cmpl   $0x1,-0xc(%ebp)
0813e9de +0x112:  jg     0813e9e7 <+0x11b>
0813e9e0 +0x114:  mov    $0x1,%eax
0813e9e5 +0x119:  jmp    0813e9ec <+0x120>
0813e9e7 +0x11b:  mov    $0x0,%eax
0813e9ec +0x120:  test   %al,%al
0813e9ee +0x122:  jne    0813e949 <+0x7d>
0813e9f4 +0x128:  jmp    0813e9f7 <+0x12b>
0813e9f6 +0x12a:  nop
0813e9f7 +0x12b:  lea    -0x1c(%ebp),%eax
0813e9fa +0x12e:  mov    %eax,0x8(%esp)
0813e9fe +0x132:  movl   $"|",0x4(%esp)
0813ea06 +0x13a:  movl   $0x0,(%esp)
0813ea0d +0x141:  call   0807e150 <_init+0xa48>
0813ea12 +0x146:  mov    %eax,-0x18(%ebp)
0813ea15 +0x149:  addl   $0x1,-0x14(%ebp)
0813ea19 +0x14d:  cmpl   $0x0,-0x18(%ebp)
0813ea1d +0x151:  je     0813ea2e <+0x162>
0813ea1f +0x153:  mov    -0x14(%ebp),%eax
0813ea22 +0x156:  cmp    0x14(%ebp),%eax
0813ea25 +0x159:  jge    0813ea2e <+0x162>
0813ea27 +0x15b:  mov    $0x1,%eax
0813ea2c +0x160:  jmp    0813ea33 <+0x167>
0813ea2e +0x162:  mov    $0x0,%eax
0813ea33 +0x167:  test   %al,%al
0813ea35 +0x169:  jne    0813e919 <+0x4d>
0813ea3b +0x16f:  mov    $0x1,%eax
0813ea40 +0x174:  add    $0x34,%esp
0813ea43 +0x177:  pop    %ebx
0813ea44 +0x178:  pop    %ebp
0813ea45 +0x179:  ret
```

## 反编译 C

```c
// advancealtar::DB_Load::parseReward @ 0x813e8cc

/* advancealtar::DB_Load::parseReward(char*, advancealtar::_Reward*, int) */

undefined4 __thiscall
advancealtar::DB_Load::parseReward(DB_Load *this,char *param_1,_Reward *param_2,int param_3)

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
  
  if ((param_1 == (char *)0x0) || (param_2 == (_Reward *)0x0)) {
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
          iVar4 = local_18 * 5;
          iVar3 = atoi(local_14);
          *(int *)(param_2 + iVar4) = iVar3;
        }
        else if (local_10 == 1) {
          iVar4 = atoi(local_14);
          if (iVar4 == 0) {
            param_2[local_18 * 5 + 4] = (_Reward)0x0;
          }
          else {
            param_2[local_18 * 5 + 4] = (_Reward)0x1;
          }
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
