window.onerror = function (msg, url, lineNo, columnNo, error) {
    var errormsg = '\n    msg: ' + msg +  '\n    url: ' + url +  '\n    lineNo: ' + lineNo +  '\n    columnNo: ' + columnNo + '\n    error: ' + error + '';
    //GS.ajaxJSON('https://www.workflowproducts.com/env/postage.acceptnc_error_eml', 'error=' + errormsg + '&version=' + ((window.contextData && contextData.postageVersion) ? contextData.postageVersion : '') + '&postgresversion=' + ((window.contextData && contextData.versionNumber) ? contextData.versionNumber : '') + '', function (data, error) {
    //});
}
