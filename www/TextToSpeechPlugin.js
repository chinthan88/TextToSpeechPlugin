var exec = require('cordova/exec');

exports.speak = function (text) {
    return new Promise(function (resolve, reject) {
        var options = {};

        if (typeof text == 'string') {
            options.text = text;
        } else {
            options = text;
        }

        cordova.exec(resolve, reject, 'TextToSpeechPlugin', 'speak', [options]);
    });
};

exports.stop = function() {
    return new Promise(function (resolve, reject) {
        cordova.exec(resolve, reject, 'TextToSpeechPlugin', 'stop', []);
    });
};

exports.checkLanguage = function() {
    return new Promise(function (resolve, reject) {
        cordova.exec(resolve, reject, 'TextToSpeechPlugin', 'checkLanguage', []);
    });
};

exports.openInstallTextToSpeechPlugin = function() {
    return new Promise(function (resolve, reject) {
        cordova.exec(resolve, reject, 'TextToSpeechPlugin', 'openInstallTextToSpeechPlugin', []);
    });
};
